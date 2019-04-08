#include <QCoreApplication>
#include "../plainlibTest/plaina.h"
#include "../sharedlib/sharedlib.h"
#include "../sharedlib/sharedlibb.h"
#include "../staticlib/staticlib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Plain C++
    PlainA plaina;
    exportPainFunction();

    // Sharedlib
    Sharedlib sharedlib;
    exportFunction();

    // Sharedlib without SHAREDLIBSHARED_EXPORT
//    SharedlibB sharedlibb;  // E:\QT_Project\lib_test\main\main.cpp:20: error: undefined reference to `SharedlibB::SharedlibB()'
//    exportFunctionB();      // E:\QT_Project\lib_test\main\main.cpp:21: error: undefined reference to `exportFunctionB()'

    // static lib
    Staticlib staticlib;
    exportStaticFunction();



//    return a.exec();
}
