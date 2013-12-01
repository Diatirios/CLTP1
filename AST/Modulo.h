#ifndef MODULO_H
#define MODULO_H

#include "Operation.h"
#include "Number.h"
#include "Factory.h"
#include <exception>

class Modulo : public Operation
{
    public:
        /** Default constructor */
        Modulo(std::string body);
        /** Default destructor */
        virtual ~Modulo();
        virtual AbstractNumber* eval(std::list<Expression*> *args);

    protected:
    private:
};

#endif // MODULO_H
