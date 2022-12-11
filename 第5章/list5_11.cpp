// クラスをデータ型とした配列を使うプログラム
#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main()
{
    const int DATA_NUM = 3;

    // HealthCheckerクラスをデータ型とした配列
    HealthChecker people[DATA_NUM] = {
        HealthChecker("山田一郎", 170, 67.5),
        HealthChecker("佐藤花子", 160, 54.5),
        HealthChecker("鈴木次郎", 180, 85.5)};

    // 配列を順番に処理
    for (int i = 0; i < DATA_NUM; i++)
    {
        cout << people[i].getName() << "さんのBMIは、" << people[i].getBmi() << "です。" << endl;
    }

    return 0;
}