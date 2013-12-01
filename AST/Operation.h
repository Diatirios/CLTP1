#ifndef OPERATION_H
#define OPERATION_H

#include "Expression.h"
#include <list>

class Operation : public Expression
{
    public:
        /** Default constructor */
        Operation(std::string body);
        /** Default destructor */
        virtual ~Operation();

        Expression *getLeft();
        Expression *getRight();
        void setLeft(Expression *left, std::list<Expression*> *args = NULL);
        void setRight(Expression *right, std::list<Expression*> *args = NULL);

    protected:
        void setSymbol(char letter);
        char getSymbol();
        std::list<Expression*> *m_leftArgs;
        std::list<Expression*> *m_rightArgs;

    private:
        char m_symbol;
        Expression *m_left;
        Expression *m_right;
};

#endif // OPERATION_H
