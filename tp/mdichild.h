#ifndef MDICHILD_H
#define MDICHILD_H

#include <QTWidgets>

class MdiChild : public QWidget
{
    Q_OBJECT

public:
    MdiChild();

    void newUser();
    QString currentUser() {return curUser;}

    QLabel* getLabel() {return label;}
    QLineEdit* getText() {return text;}
    QPushButton* getButton() {return send;}

protected:

    void closeEvent(QCloseEvent *event);



private:

    QLabel *label;
    QLineEdit *text;
    QPushButton *send;

    void setCurrentUser(QString UserName);

    QString curUser;

};

#endif
