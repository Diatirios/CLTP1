#ifndef BINARYBOOLEANCONDITION_H
#define BINARYBOOLEANCONDITION_H

#include "BooleanCondition.h"


class BinaryBooleanCondition : public BooleanCondition
{
    public:
        BinaryBooleanCondition(std::string body);
        virtual ~BinaryBooleanCondition();
        virtual BooleanCondition *getLeft();
        virtual BooleanCondition *getRight();
        virtual void setLeft(BooleanCondition *bcond);
        virtual void setRight(BooleanCondition *bcond);

    protected:
    private:
        BooleanCondition *m_left;
        BooleanCondition *m_right;
};

#endif // BINARYBOOLEANCONDITION_H
