#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main()
{
    // HealthCheckerクラスのインスタンスを生成
    HealthChecker yamada("山田一郎", 170, 67.5);

    // BMIを表示
    cout << "BMIは、" << yamada.getBmi() << "です。" << endl;

    return 0;
}