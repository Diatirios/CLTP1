#include <iostream>
#include <Expression.h>
#include <Operation.h>
#include <Number.h>
#include <Add.h>
#include <Factory.h>
#include <GlobalContext.h>

using namespace std;


int main()
{
    Operation *p = Factory::createSubstractOperation("2-3");
    p->setLeft(Factory::createIntegerNumber(2));
    p->setRight(Factory::createIntegerNumber(3));

    cout << p->eval(NULL)->getInteger() << endl;

    /*GlobalContext::getInstance()->addNewLocalContest();
    GlobalContext::getInstance()->addNewVariableInLastContext("n", Factory::createIntegerNumber(5));

    cout << GlobalContext::getInstance()->isContaining("n") << endl;
    cout << GlobalContext::getInstance()->getNumber("n")->toString() << endl;

    Number *n = Factory::createNumber("2.5");
    cout << n->getInteger() << endl;
    cout << n->getReal() << endl;
    cout << n->toString() << endl;
    cout << n->isReal() << endl;*/

    //// fact
    Function *fact = Factory::createNewFunction("", "fact");
    list<string> *args = new list<string>();
    args->push_back("n");
    fact->setArgsNames(args);
    IfThenElse *ifthen = (IfThenElse*)Factory::createNewIf("if...");
    fact->setExpression(ifthen);
    BinaryNumberCondition *bc = Factory::createNewLessThanOrEqual("n<=0");
    Variable *v = Factory::createNewVariable("v");
    v->setName("n");
    bc->setLeft(v);
    bc->setRight(Factory::createIntegerNumber(0));
    ifthen->setBoolCondition(bc);

    // if true
    ifthen->setLeft(Factory::createIntegerNumber(1));
    // if false
    Operation *time = Factory::createTimeOperation("n*fact(n-1)");
    ifthen->setRight(time);
    time->setLeft(v);
    Operation *sub = Factory::createSubstractOperation("n-1");
    sub->setLeft(fact->getArg("n"));
    sub->setRight(Factory::createIntegerNumber(1));

    list<Expression*> *rec = new list<Expression*>();
    rec->push_back(sub);
    time->setRight(fact, rec);

//time->setRight(Factory::createIntegerNumber(5));

    cout.flush();

    list<Expression*> *ar = new list<Expression*>();
    ar->push_back(Factory::createIntegerNumber(3));
    cout << fact->eval(ar)->getInteger() << endl;

    return 0;
}
