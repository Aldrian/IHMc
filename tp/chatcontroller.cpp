#include "chatcontroller.h"
#include "model.h"
#include "mdichild.h"

ChatController::ChatController(Model *m, MdiChild *c) :
    message(m),
    chat(c)
{
    this->sendMessage = new ActionMessage(message);

    //connect(&c, SIGNAL(c->getButton()->click()), SLOT(sendMessage::sendMessage(c->getText()->text().toStdString())));
    connect(&c,
            c->getButton()->click(),
            &sendMessage,
            sendMessage->sendMessage(c->getText()->text()));
}
