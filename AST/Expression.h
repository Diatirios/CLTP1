#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include <AbstractNumber.h>
#include <list>

class Expression
{
    public:
        /** Default constructor */
        Expression(std::string body);
        /** Default destructor */
        virtual ~Expression();
        virtual AbstractNumber* eval(std::list<Expression*> *args) = 0;

        std::string getBody();

    protected:
        void setBody(std::string body);
    private:
        std::string m_body;
};

#endif // EXPRESSION_H
