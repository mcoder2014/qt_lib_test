#include "sharedlib.h"
#include <QDebug>

Sharedlib::Sharedlib()
{
    qDebug() << "This is sharedlib with SHAREDLIBSHARED_EXPORT";
}

void exportFunction()
{
    qDebug() << "This is function with SHAREDLIBSHARED_EXPORT";
}
