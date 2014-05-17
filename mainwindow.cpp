#include <QtGui>

#include "mainwindow.h"
#include "mdichild.h"

MainWindow::MainWindow()
{
    mdiArea = new QMdiArea;
    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setCentralWidget(mdiArea);
    connect(mdiArea, SIGNAL(subWindowActivated(QMdiSubWindow*)),
            this, SLOT(updateMenus()));
    windowMapper = new QSignalMapper(this);
    connect(windowMapper, SIGNAL(mapped(QWidget*)),
            this, SLOT(setActiveSubWindow(QWidget*)));

    createActions();

    MdiChild *child = createMdiChild();
    child->newFile();
    child->show();

    setWindowTitle(tr("MDI"));
    setUnifiedTitleAndToolBarOnMac(true);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    mdiArea->closeAllSubWindows();
    if (mdiArea->currentSubWindow()) {
        event->ignore();
    } else {
        writeSettings();
        event->accept();
    }
}



MdiChild *MainWindow::createMdiChild()
 {
     MdiChild *child = new MdiChild;
     mdiArea->addSubWindow(child);

     return child;
 }

void MainWindow::createActions()
 {
    closeAct = new QAction(tr("Cl&ose"), this);
    closeAct->setStatusTip(tr("Close the active window"));
    connect(closeAct, SIGNAL(triggered()),mdiArea, SLOT(closeActiveSubWindow()));

    closeAllAct = new QAction(tr("Close &All"), this);
    closeAllAct->setStatusTip(tr("Close all the windows"));
    connect(closeAllAct, SIGNAL(triggered()),mdiArea, SLOT(closeAllSubWindows()));
}

MdiChild *MainWindow::activeMdiChild()
{
    if (QMdiSubWindow *activeSubWindow = mdiArea->activeSubWindow())
        return qobject_cast<MdiChild *>(activeSubWindow->widget());
    return 0;
}


void MainWindow::switchLayoutDirection()
 {
     if (layoutDirection() == Qt::LeftToRight)
         qApp->setLayoutDirection(Qt::RightToLeft);
     else
         qApp->setLayoutDirection(Qt::LeftToRight);
 }

 void MainWindow::setActiveSubWindow(QWidget *window)
 {
     if (!window)
         return;
     mdiArea->setActiveSubWindow(qobject_cast<QMdiSubWindow *>(window));
 }
