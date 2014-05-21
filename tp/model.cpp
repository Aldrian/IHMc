#include <QtWidgets>
#include "model.h"

Model::Model()
{
}
void Model::SetMessage(QString newMessage)
{
    this->lastMessage=newMessage;
    emit messageChanged(lastMessage);
}

QString Model::GetMessage()
{
    return this->lastMessage;
}
