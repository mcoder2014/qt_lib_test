#ifndef SHAREDLIB_H
#define SHAREDLIB_H

#include "sharedlib_global.h"

class SHAREDLIBSHARED_EXPORT Sharedlib
{

public:
    Sharedlib();
};

void SHAREDLIBSHARED_EXPORT exportFunction();  // 导出函数测试

#endif // SHAREDLIB_H
