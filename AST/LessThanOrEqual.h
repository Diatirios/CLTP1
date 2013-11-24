#ifndef LESSTHANOREQUAL_H
#define LESSTHANOREQUAL_H

#include <BinaryNumberCondition.h>


class LessThanOrEqual : public BinaryNumberCondition
{
    public:
        LessThanOrEqual(std::string body);
        virtual ~LessThanOrEqual();
        bool eval();

    protected:
    private:
};

#endif // LESSTHANOREQUAL_H
