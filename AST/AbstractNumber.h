#ifndef ABSTRACTNUMBER_H
#define ABSTRACTNUMBER_H

#include <string>
#include <list>

class AbstractNumber
{
    public:
        virtual void setInteger(int val) = 0;
        virtual void setReal(double val) = 0;
        virtual bool isReal() = 0;
        virtual int getInteger() = 0;
        virtual double getReal() = 0;

        virtual std::string toString() = 0;
        virtual void fromString(std::string num) = 0;
        virtual AbstractNumber* eval() = 0;

    protected:
    private:
};

#endif // ABSTRACTNUMBER_H
