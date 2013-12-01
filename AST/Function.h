#ifndef FUNCTION_H
#define FUNCTION_H

#include <list>
#include "Expression.h"
#include "Classes.h"
#include "GlobalContext.h"

class Function : public Expression
{
    public:
        Function(std::string body, std::string name);
        virtual ~Function();
        std::string getName();
        void setName(std::string name);
        void setArgsNames(std::list<std::string> *args);
        AbstractNumber *eval(std::list<Expression*> *args);
        AbstractNumber *eval();
        Number* getArg(std::string name);
        Expression *getExpression();
        void setExpression(Expression* expr);

    protected:
    private:
        std::string m_name;
        std::list<std::string> *m_argsNames;
        Expression *m_expr;
};

#endif // FUNCTION_H
