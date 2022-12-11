#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

// BMIを返すメンバ関数の実装
double HealthChecker::getBmi()
{
    // BMIが未計算の場合は計算
    if (this->bmi == 0)
    {
        double mHeight = this->height / 100;
        this->bmi = this->weight / mHeight / mHeight;
    }

    return this->bmi;
}

// 名前を返すメンバ変数の実装
string HealthChecker::getName()
{
    return this->name;
}

// コンストラクタの実装
HealthChecker::HealthChecker(string name, double height, double weight)
{
    // メンバ変数に初期値を設定
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->bmi = 0;
}
