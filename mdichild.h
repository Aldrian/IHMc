#ifndef MDICHILD_H
#define MDICHILD_H

#include <QTextEdit>

class MdiChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    MdiChild();

protected:
    void closeEvent(QCloseEvent *event);

private slots:

private:
};

#endif
