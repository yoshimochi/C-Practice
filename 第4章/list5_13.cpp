// オブジェクトの動的な生成と破棄を行うプログラム
#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main()
{
    // オブジェクトを動的に生成
    HealthChecker *ptr = new HealthChecker("山田一郎", 170, 67.5);

    cout << ptr->getName() << "さんのBMIは、" << ptr->getBmi() << "です。" << endl;

    // オブジェクトを破棄
    delete ptr;

    return 0;
}
