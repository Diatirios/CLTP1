#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <string>
#include <sstream>
#include "Expression.h"
#include "AbstractNumber.h"

class Number : public Expression, public AbstractNumber
{
    public:
        /** Default constructor */
        Number(int num);
        Number(float num);
        Number(std::string num);
        /** Default destructor */
        virtual ~Number();
        void setInteger(int val);
        void setReal(double val);
        bool isReal();
        int getInteger();
        double getReal();

        std::string toString();
        void fromString(std::string num);
        virtual Number* eval(std::list<Expression*> *args);
        virtual Number* eval();

    private:
        bool m_isreal;
        int m_integer;
        double m_real;
};

#endif // NUMBER_H
