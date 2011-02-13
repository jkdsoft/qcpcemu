#ifndef CPCSYSTEM_H
#define CPCSYSTEM_H

#include "LibCpcEmu_global.h"

class CpcSystemPrivate;


class LIBCPCEMUSHARED_EXPORT CpcSystem
{
public:
    CpcSystem();
    ~CpcSystem();

    void run();
    void step();

private:
    CpcSystemPrivate* const d;
};

#endif // CPCSYSTEM_H
