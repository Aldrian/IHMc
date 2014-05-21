#include <QtWidgets>

#include "mdichild.h"

MdiChild::MdiChild()
{
   label = new QLabel();
   label->setStyleSheet("QLabel { background-color : white;}");
   label->setMinimumHeight(150);
   text = new QLineEdit();
   text->setMaximumHeight(25);
   send = new QPushButton("Send");

   QGridLayout *layout = new QGridLayout;
   layout->addWidget(label, 0, 0, 0,2);
   layout->addWidget(text, 1, 0);
   layout->addWidget(send, 1,1);

   this->setLayout(layout);

   setAttribute(Qt::WA_DeleteOnClose);
}

void MdiChild::newUser()
{
    bool ok;
    QString Username = QInputDialog::getText(this, tr("Username select"),
                                           tr("Please type your username:"), QLineEdit::Normal,
                                           QDir::home().dirName(), &ok);
    setWindowTitle(Username);
}





void MdiChild::closeEvent(QCloseEvent *event)
{

        event->accept();

}


