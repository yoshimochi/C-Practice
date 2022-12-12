#include <iostream>
using namespace std;

// 10個のカウンタの値
int counterVal[10];

// 引数で指定されたカウンタの値を0にする関数
void resetCounterVal(int num)
{
    counterVal[num] = 0;
}

// 引数で指定されたカウンタの値をアップする関数
void upCounterVal(int num)
{
    counterVal[num]++;
}

int main()
{
    resetCounterVal(3);
    resetCounterVal(5);

    upCounterVal(3);
    upCounterVal(3);

    upCounterVal(5);
    upCounterVal(5);
    upCounterVal(5);
    upCounterVal(5);

    cout << "3番目のカウンタの値 = " << counterVal[3] << endl;
    cout << "5番目のカウンタの値 = " << counterVal[5] << endl;

    return 0;
}