// 年齢に応じた料金を返すgetFee関数(エラー処理②)
#include <iostream>
using namespace std;

int getFee(int age)
{
    int fee;

    if (age < 0)
    {
        fee = -1;
    }
    else if (age > 150)
    {
        fee = -2;
    }
    else if (age < 20)
    {
        fee = 500;
    }
    else
    {
        fee = 1000;
    }

    return fee;
}

int main()
{
    int age, fee;

    cout << "年齢を入力してください：";
    cin >> age;
    fee = getFee(age);
    if (fee == -1)
    {
        cout << "マイナスの年齢が設定されました。" << endl;
    }
    if (fee == -2)
    {
        cout << "年齢が大き過ぎます。" << endl;
    }
    cout << "料金は、" << fee << "円です。" << endl;

    return 0;
}