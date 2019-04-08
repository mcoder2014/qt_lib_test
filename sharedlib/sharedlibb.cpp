#include "sharedlibb.h"
#include <QDebug>

SharedlibB::SharedlibB()
{
    qDebug() << "this is shared lib without SHAREDLIBSHARED_EXPORT";
}

void exportFunctionB()
{
    qDebug() << "This is shared function without SHAREDLIBSHARED_EXPORT";
}
