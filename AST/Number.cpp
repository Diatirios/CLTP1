#include "Number.h"

Number::Number(int num) : Expression("")
{
    setInteger(num);
}

Number::Number(float num) : Expression("")
{
    setReal(num);
}

Number::Number(std::string num) : Expression(num)
{
    fromString(num);
}

Number::~Number()
{
    //dtor
}

void Number::setInteger(int val)
{
    m_integer = val;
    m_isreal = false;
    m_real = val;
}

void Number::setReal(double val)
{
    m_real = val;
    m_isreal = true;
    m_integer = (int)val;
}

bool Number::isReal()
{
    return m_isreal;
}

int Number::getInteger()
{
    if (isReal())
        return (int) m_real;
    return m_integer;
}

double Number::getReal()
{
    if (isReal())
        return m_real;
    return m_integer;
}

std::string Number::toString()
{
    std::ostringstream os;
    if (m_isreal)
        os << m_real;
    else
        os << m_integer;
    return os.str();
}

Number* Number::eval()
{
    return this;
}

Number* Number::eval(std::list<Expression*> *args)
{
    return this;
}

void Number::fromString(std::string num)
{
    std::istringstream ss(num);
    m_isreal = ! ((ss >> m_integer) && (ss.eof()));
    if (m_isreal)
    {
        std::istringstream ssi(num);
        ssi >> m_real;
    }
}

