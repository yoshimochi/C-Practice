#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

// 標準BMIを表すメンバ定数の実体
const int HealthChecker::STD_BMI = 22;

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

// 名前を返すメンバ関数の実装
string HealthChecker::getName()
{
    return this->name;
}

// 標準BMIを返すメンバ関数の実装
int HealthChecker::getStdBmi()
{
    return HealthChecker::STD_BMI;
}

// 標準体重を返すメンバ関数の実装
double HealthChecker::getStdWeight()
{
    double mHeight = this->height / 100;
    return HealthChecker::STD_BMI * mHeight * mHeight;
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
