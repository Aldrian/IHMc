#include <QtGui>

#include "mdichild.h"

MdiChild::MdiChild()
{
	setAttribute(Qt::WA_DeleteOnClose);
}

void MdiChild::closeEvent(QCloseEvent *event)
{
	event->accept();
}
