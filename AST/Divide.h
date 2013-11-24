#ifndef DIVIDE_H
#define DIVIDE_H

#include <Operation.h>
#include <Number.h>
#include <Factory.h>
#include <exception>

class Divide : public Operation
{
    public:
        /** Default constructor */
        Divide(std::string body);
        /** Default destructor */
        virtual ~Divide();
        virtual AbstractNumber* eval(std::list<Expression*> *args);

    protected:
    private:
};

#endif // DIVIDE_H
