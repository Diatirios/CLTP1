#ifndef BINARYNUMBERCONDITION_H
#define BINARYNUMBERCONDITION_H

#include <BooleanCondition.h>
#include <Expression.h>

class BinaryNumberCondition : public BooleanCondition
{
    public:
        BinaryNumberCondition(std::string body);
        virtual ~BinaryNumberCondition();
        virtual Expression *getLeft();
        virtual Expression *getRight();
        virtual void setLeft(Expression *expr);
        virtual void setRight(Expression *expr);

    protected:
    private:
        Expression *m_left;
        Expression *m_right;
};

#endif // BINARYNUMBERCONDITION_H
