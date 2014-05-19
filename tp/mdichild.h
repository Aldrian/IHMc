#ifndef MDICHILD_H
#define MDICHILD_H

#include <QTextEdit>

class MdiChild : public QTextEdit
{
    Q_OBJECT

public:
    MdiChild();

    void newUser();
    QString currentUser() { return curUser; }

protected:
    void closeEvent(QCloseEvent *event);



private:

    void setCurrentUser(const QString &UserName);

    QString curUser;

};

#endif
