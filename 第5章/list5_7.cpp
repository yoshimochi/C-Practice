#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main()
{
    // HealthCheckerクラスのインスタンスを生成
    HealthChecker yamada("山田一郎", 170, 67.5);

    // BMIを表示
    // 下記のようにyamada.nameで名前を表示させようとすると、privateな変数にアクセスすることとなり、コンパイルエラーになる
    // cout << yamada.name << "さんのBMIは、" << yamada.getBmi() << "です。" << endl;

    return 0;
}