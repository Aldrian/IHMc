#ifndef MAINWINDOW_H
 #define MAINWINDOW_H

 #include <QMainWindow>

 class MdiChild;
 class QAction;
 class QMdiArea;
 class QMdiSubWindow;
 class QSignalMapper;

 class MainWindow : public QMainWindow
 {
     Q_OBJECT

 public:
     MainWindow();

 protected:
     void closeEvent(QCloseEvent *event);

 private slots:
     MdiChild *createMdiChild();
     void setActiveSubWindow(QWidget *window);
     void switchLayoutDirection();

 private:
     void createActions();
     MdiChild *activeMdiChild();
     QMdiSubWindow *findMdiChild(const QString &fileName);
     QMdiArea *mdiArea;
     QSignalMapper *windowMapper;

     QAction *newAct;
     QAction *closeAct;
     QAction *closeAllAct;

  };

  #endif
