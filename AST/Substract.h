#ifndef SUBSTRACT_H
#define SUBSTRACT_H

#include <Operation.h>
#include <Number.h>
#include <Factory.h>

class Substract : public Operation
{
    public:
        /** Default constructor */
        Substract(std::string body);
        /** Default destructor */
        virtual ~Substract();
        virtual AbstractNumber* eval(std::list<Expression*> *args);

    protected:
    private:
};

#endif // SUBSTRACT_H
