#include "Function.h"
#include <GlobalFunctions.h>

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Function
 * @brief Represents an AST function
 */

/**
 * Constructor
 * @param body text contained
 * @param name the function name
 */
Function::Function(std::string body, std::string name) : Expression(body)
{
    setName(name);
    m_argsNames = NULL;
    m_expr = NULL;
    GlobalFunctions::getInstance()->addFunction(getName(), this);
}

/**
 * Destructor
 */
Function::~Function()
{
    delete m_argsNames;
}

/**
 * Return the name of the function
 * @return the name
 */
std::string Function::getName()
{
    return m_name;
}

/**
 * Modify the name of the function
 * @param name a new name
 */
void Function::setName(std::string name)
{
    m_name = name;
}

/**
 * Modify arguments of the function
 * @param list a list of names
 */
void Function::setArgsNames(std::list<std::string> *args)
{
    m_argsNames = args;
}

/**
 * Return the value associated with an argument in the local context
 * @return a Number
 */
Number *Function::getArg(std::string name)
{
    return GlobalContext::getInstance()->getNumber(name);
}

/**
 * Evaluate the function
 * @param args a list of arguments
 * @return a Number
 */
AbstractNumber *Function::eval(std::list<Expression*> *args)
{
    std::cout << "here" << std::endl;
    std::cout.flush();
    GlobalContext::getInstance()->addNewLocalContest();
    std::list<std::string>::iterator iterName = m_argsNames->begin();
    std::list<Expression*>::iterator iterVal = args->begin();
    while (iterName != m_argsNames->end() && iterVal != args->end())
    {
        std::cout << (*iterVal)->eval(args)->getInteger() << std::endl;
        std::cout.flush();
        GlobalContext::getInstance()->addNewVariableInLastContext(*iterName, (Number*) (*iterVal)->eval(args));
        ++iterName, ++iterVal;
    }

    AbstractNumber *res = (Number*) eval();

    GlobalContext::getInstance()->deleteLastLocalContext();

    return res;
}

AbstractNumber *Function::eval()
{
    return getExpression()->eval(NULL);
}

/**
 * Return the expression
 */
Expression *Function::getExpression()
{
    return m_expr;
}

/**
 * Modify the expression
 * @param expr an Expression
 */
void Function::setExpression(Expression* expr)
{
    m_expr = expr;
}

