#include <iostream>
using namespace std;
#include "chapter4.h"

int main()
{
    const int DATA_NUM = 10;

    // 10人の学生のテストの得点を格納した配列
    int point[DATA_NUM] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};
    double average;

    average = getAverage(point, DATA_NUM);

    cout << "平均点：" << average << endl;

    return 0;
}