#include "Counter.h"

void Counter::restVal()
{
    this->val = 0;
}

void Counter::upVal()
{
    this->val++;
}

int Counter::getVal()
{
    return this->val;
}

Counter::Counter()
{
    this->restVal();
}