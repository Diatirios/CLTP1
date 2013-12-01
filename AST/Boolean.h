#ifndef BOOLEAN_H
#define BOOLEAN_H

#include "UnaryBooleanCondition.h"

class Boolean : public UnaryBooleanCondition
{
    public:
        Boolean(bool val);
        virtual ~Boolean();
        virtual bool eval();

    protected:
        bool m_val;
    private:
};

#endif // BOOLEAN_H
