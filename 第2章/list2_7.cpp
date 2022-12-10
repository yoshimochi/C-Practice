#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int STD_BMI = 22; // 標準BMI
    double height;          // 身長
    double weight;          // 体重
    double bmi;             // BMI
    double stdWeight;       // 標準体重

    // 標準入力からheightを取得
    cout << "身長(cm)を入力してください : ";
    cin >> height;

    // 標準入力からweightを取得
    cout << "体重(kg)を入力してください : ";
    cin >> weight;

    // 身長の単位を変換
    height /= 100;

    // BMIを計算
    bmi = weight / height / height;

    // 標準体重を計算
    stdWeight = STD_BMI * height * height;

    // BMIを画面表示
    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    // 標準体重を画面表示
    cout << "あなたの標準体重は、" << stdWeight << "kgです。" << endl;

    return 0;
}