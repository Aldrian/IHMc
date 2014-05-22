#ifndef CHATCONTROLLER_H
#define CHATCONTROLLER_H
#include "model.h"
#include "mdichild.h"
#include "actionmessage.h"
#include <QObject>

class ChatController: public QObject
{
   Q_OBJECT
private :
    Model *message;
    MdiChild *chat;
    QAction *newMessage;
    ActionMessage *sendMessage;
private slots:
    void RecieveMessage(QString message, QString from);
    void CallAction();
public:
    ChatController(Model *m, MdiChild *c);
};

#endif // CHATCONTROLLER_H
