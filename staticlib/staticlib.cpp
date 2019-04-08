#include "staticlib.h"
#include <QDebug>

Staticlib::Staticlib()
{
    qDebug() << "This is static lib export";
}

void exportStaticFunction()
{
    qDebug() << "This is static lib function export";
}
