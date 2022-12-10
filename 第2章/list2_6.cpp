#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double height;
    double weight;
    double bmi;

    // 標準入力からheightを取得
    cout << "身長(cm)を入力してください : ";
    cin >> height;

    // 標準入力からweightを取得
    cout << "体重(kg)を入力してください : ";
    cin >> weight;

    // 身長の単位を変換
    height /= 100;

    bmi = weight / height / height;

    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    return 0;
}