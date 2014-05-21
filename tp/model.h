#ifndef MODEL_H
#define MODEL_H
#include <QtWidgets>

class Model: public QObject
{
    Q_OBJECT
private :
    QString lastMessage;

public:
    void SetMessage(QString newMessage);
    QString GetMessage();
    Model();
signals:
    void messageChanged(QString newMessage);
};

#endif // MODEL_H
