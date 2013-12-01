#ifndef TIME_H
#define TIME_H

#include "Operation.h"
#include "Number.h"
#include "Factory.h"

class Time : public Operation
{
    public:
        /** Default constructor */
        Time(std::string body);
        /** Default destructor */
        virtual ~Time();
        virtual AbstractNumber* eval(std::list<Expression*> *args);

    protected:
    private:
};

#endif // TIME_H
