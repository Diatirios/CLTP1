#ifndef GLOBACONTEXT_H
#define GLOBACONTEXT_H

#include "Context.h"


class GlobalContext : public Context
{
    public:
        static GlobalContext *getInstance();

    protected:

    private:
        virtual ~GlobalContext();
};

#endif // GLOBACONTEXT_H
