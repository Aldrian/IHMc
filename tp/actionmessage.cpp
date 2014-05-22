#include "actionmessage.h"

ActionMessage::ActionMessage(Model *m) : message(m) {}


void ActionMessage::sendMessage(QString message, QString from)
{
   this->message->SetMessage(message, from);
}

