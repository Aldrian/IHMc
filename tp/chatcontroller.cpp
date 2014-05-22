#include "chatcontroller.h"
#include "model.h"
#include "mdichild.h"
ChatController::ChatController(Model *m, MdiChild *c) :
    message(m),
    chat(c)
{
    this->sendMessage = new ActionMessage(message);

    QObject::connect(this->chat->getButton(),
            SIGNAL(clicked()),
            this,
            SLOT(CallAction()));
   QObject::connect(this->message,
            SIGNAL(messageChanged(QString, QString)),
            this,
            SLOT(RecieveMessage(QString, QString)));
}

void ChatController::RecieveMessage(QString message, QString from)
{
    QString texte;
    texte = chat->getLabel()->text();
    chat -> getLabel();
    texte += "\n";
    texte += "<b>";
    texte += from;
    texte += "</b>";
    texte +=" : ";
    texte += message;
    chat->getLabel()->setText(texte);
}

void ChatController::CallAction()
{
    QString from;
    QString texte;
    from = chat->currentUser();
    texte = chat->getText()->text();
    chat->getText()->clear();
    this->sendMessage->sendMessage(texte, from);
}
