#ifndef OR_H
#define OR_H

#include <BinaryBooleanCondition.h>

class OR : public BinaryBooleanCondition
{
    public:
        OR(std::string body);
        virtual ~OR();
        bool eval();

    protected:
    private:
};

#endif // OR_H
