#ifndef ADD_H
#define ADD_H

#include "Operation.h"
#include "Number.h"
#include "Factory.h"

class Add : public Operation
{
    public:
        /** Default constructor */
        Add(std::string body);
        /** Default destructor */
        virtual ~Add();
        virtual AbstractNumber* eval(std::list<Expression*> *args);

    protected:
    private:
};

#endif // ADD_H
