#include <QtWidgets>
#include "model.h"

Model::Model()
{
}
void Model::SetMessage(QString newMessage, QString from)
{
    this->messageFrom=from;
    this->lastMessage=newMessage;
    emit messageChanged(lastMessage, messageFrom);
}

QString Model::GetMessage()
{
    return this->lastMessage;
}

QString Model::GetUser()
{
    return this->messageFrom;
}
