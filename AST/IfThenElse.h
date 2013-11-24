#ifndef IFTHENELSE_H
#define IFTHENELSE_H

#include <Expression.h>
#include <BooleanCondition.h>

class IfThenElse : public Expression
{
    public:
        IfThenElse(std::string body);
        virtual ~IfThenElse();
        virtual AbstractNumber* eval(std::list<Expression*> *args);
        ::Expression *getLeft();
        ::Expression *getRight();
        BooleanCondition *getCondition();

        void setLeft(::Expression *left);
        void setRight(::Expression *right);
        void setBoolCondition(BooleanCondition *condition);

    protected:

    private:
        BooleanCondition *m_condition;
        ::Expression *m_left;
        ::Expression *m_right;
};

#endif // IFTHENELSE_H
