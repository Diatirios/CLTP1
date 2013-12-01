#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expression.h"
#include "GlobalContext.h"

class Variable : public Expression
{
    public:
        Variable(std::string body);
        virtual ~Variable();
        std::string getName();
        AbstractNumber *eval(std::list<Expression*> *args);

        void setName(std::string name);

    protected:
    private:
        std::string m_name;
};

#endif // VARIABLE_H
