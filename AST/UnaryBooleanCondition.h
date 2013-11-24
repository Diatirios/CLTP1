#ifndef UNARYBOOLEANCONDITION_H
#define UNARYBOOLEANCONDITION_H

#include <BooleanCondition.h>

class UnaryBooleanCondition : public BooleanCondition
{
    public:
        UnaryBooleanCondition(std::string body);
        virtual ~UnaryBooleanCondition();
        virtual void setBoooleanCondition(BooleanCondition *bcond);
        virtual BooleanCondition *getCond();

    protected:
    private:
        BooleanCondition *m_bcond;
};

#endif // UNARYBOOLEANCONDITION_H
