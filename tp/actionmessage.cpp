#include "actionmessage.h"

ActionMessage::ActionMessage(Model *m) : message(m) {}


void ActionMessage::sendMessage(QString message)
{
   this->message->setMessage(message);
}

