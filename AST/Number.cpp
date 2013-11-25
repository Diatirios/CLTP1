#include "Number.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Number
 * @brief A number is a representation of real world. From outside, there is no difference between integers and floats.
 */

/**
 * Constructor
 * @param num integer value
 */
Number::Number(int num) : Expression("")
{
    setInteger(num);
}

/**
 * Constructor
 * @param num real value
 */
Number::Number(float num) : Expression("")
{
    setReal(num);
}

/**
 * Constructor
 * @param num value under text form
 */
Number::Number(std::string num) : Expression(num)
{
    fromString(num);
}

/**
 * Destructor
 */
Number::~Number()
{
}

/**
 * Modify the value under integer form
 * @param val an integer
 */
void Number::setInteger(int val)
{
    m_integer = val;
    m_isreal = false;
    m_real = val;
}

/**
 * Modify the value under real form
 * @param val a real
 */
void Number::setReal(double val)
{
    m_real = val;
    m_isreal = true;
    m_integer = (int)val;
}

/**
 * Test number set
 * @return true if the number is in R
 */
bool Number::isReal()
{
    return m_isreal;
}

/**
 * Return the integer value
 * @return an integer
 */
int Number::getInteger()
{
    if (isReal())
        return (int) m_real;
    return m_integer;
}

/**
 * Return the float value
 * @return a float
 */
double Number::getReal()
{
    if (isReal())
        return m_real;
    return m_integer;
}

/**
 * Return the number under text form
 * @return a string
 */
std::string Number::toString()
{
    std::ostringstream os;
    if (m_isreal)
        os << m_real;
    else
        os << m_integer;
    return os.str();
}

/**
 * Evaluate the number
 * @return this number
 */
Number* Number::eval()
{
    return this;
}

/**
 * Evaluate the number
 * @param args -Useless-
 * @return this number
 */
Number* Number::eval(std::list<Expression*> *args)
{
    return this;
}

/**
 * Modify the value
 * @param num a number under text form
 */
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

