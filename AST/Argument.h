#ifndef ARGUMENT_H
#define ARGUMENT_H

#include "Expression.h"
#include <string>
#include "GlobalContext.h"

class Argument : public Expression
{
    public:
        Argument(std::string body);
        virtual ~Argument();
        AbstractNumber *eval(std::list<Expression*> *args);

    protected:
    private:
};

#endif // ARGUMENT_H
