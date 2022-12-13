#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
#include "AccountEx.h"

string AccountEx::getName()
{
    return this->name;
}

AccountEx::AccountEx(string number, string name, int balance) : Account(number, balance)
{
    this->name = name;
}
