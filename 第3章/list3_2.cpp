#include <iostream>
using namespace std;

int main()
{
    double height;
    double weight;
    double bmi;

    // 標準入力からheightを取得
    cout << "身長(m)を入力してください : ";
    cin >> height;

    // 標準入力からweightを取得
    cout << "体重(kg)を入力してください : ";
    cin >> weight;

    bmi = weight / height / height;

    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    // 日本肥満学会の肥満度分類を表示
    if (bmi < 18.5)
    {
        cout << "低体重です。" << endl;
    }
    else if (bmi < 25.0)
    {
        cout << "普通体重です。" << endl;
    }
    else if (bmi < 30.0)
    {
        cout << "肥満(1度)です。" << endl;
    }
    else if (bmi < 35.0)
    {
        cout << "肥満(2度)です。" << endl;
    }
    else if (bmi < 40.0)
    {
        cout << "肥満(3度)です。" << endl;
    }
    else
    {
        cout << "肥満(4度)です。" << endl;
    }

    return 0;
}