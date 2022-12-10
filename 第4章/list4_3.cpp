#include <iostream>
using namespace std;
#include "chapter4.h"

int main()
{
    double height;
    double weight;
    double bmi;

    cout << "身長を入力してください：";
    cin >> height;

    cout << "体重を入力してください：";
    cin >> weight;

    bmi = getBmi(height, weight);

    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    return 0;
}