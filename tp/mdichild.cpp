#include <QtWidgets>

#include "mdichild.h"

MdiChild::MdiChild()
{
    setAttribute(Qt::WA_DeleteOnClose);
}

void MdiChild::newUser()
{
    bool ok;
    QString Username = QInputDialog::getText(this, tr("Username select"),
                                           tr("Please tyoe your username:"), QLineEdit::Normal,
                                           QDir::home().dirName(), &ok);
    setWindowTitle(Username);
}





void MdiChild::closeEvent(QCloseEvent *event)
{

        event->accept();

}



