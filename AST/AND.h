#ifndef AND_H
#define AND_H

#include <BinaryBooleanCondition.h>
#include <string>

class AND : public BinaryBooleanCondition
{
    public:
        AND(std::string body);
        virtual ~AND();
        bool eval();

    protected:
    private:
};

#endif // AND_H
