#ifndef MODEL_H
#define MODEL_H
#include <QtWidgets>

class Model: public QObject
{
    Q_OBJECT
private :
    QString messageFrom;
    QString lastMessage;

public:
    void SetMessage(QString newMessage, QString from);
    QString GetMessage();
    QString GetUser();
    Model();
signals:
    void messageChanged(QString newMessage, QString from);
};

#endif // MODEL_H
