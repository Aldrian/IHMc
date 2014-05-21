#ifndef CHATCONTROLLER_H
#define CHATCONTROLLER_H
#include "model.h"
#include "mdichild.h"
#include "actionmessage.h"

class ChatController
{

private :
    Model *message;
    MdiChild *chat;
    QAction *newMessage;
    ActionMessage *sendMessage;
public:
    ChatController(Model *m, MdiChild *c);
};

#endif // CHATCONTROLLER_H
