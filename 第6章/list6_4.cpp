#include <iostream>
using namespace std;
#include "Counter.h"

int main()
{
    Counter cnt[10];

    cnt[3].upVal();
    cnt[3].upVal();

    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();

    cout << "3番目のカウンタの値 = " << cnt[3].getVal() << endl;
    cout << "5番目のカウンタの値 = " << cnt[5].getVal() << endl;

    return 0;
}