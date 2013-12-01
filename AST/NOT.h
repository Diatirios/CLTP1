#ifndef NOT_H
#define NOT_H

#include "UnaryBooleanCondition.h"


class NOT : public UnaryBooleanCondition
{
    public:
        NOT(std::string body);
        virtual ~NOT();
        virtual bool eval();

    protected:
    private:
};

#endif // NOT_H
