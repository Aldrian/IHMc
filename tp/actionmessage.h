#ifndef ACTIONMESSAGE_H
#define ACTIONMESSAGE_H
#include <QObject>
#include "model.h"

class ActionMessage:public QObject
{
public:
    ActionMessage(Model *m);
public slots :
     void sendMessage(QString message);
private :
    Model *message;
};

#endif // ACTIONMESSAGE_H
