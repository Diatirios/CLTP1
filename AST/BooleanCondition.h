#ifndef BOOLEANCONDITION_H
#define BOOLEANCONDITION_H

#include <string>

class BooleanCondition
{
    public:
        BooleanCondition(std::string body);
        virtual ~BooleanCondition();
        virtual bool eval() = 0;

    protected:
        void setBody(std::string body);
        std::string getBody();
    private:
        std::string m_body;
};

#endif // BOOLEANCONDITION_H
