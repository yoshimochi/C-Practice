// 関数テンプレートを用いてlist10_1.cppを実装
#include <iostream>
using namespace std;

template <class T>
T getMain(T a, T b)
{
    return a < b ? a : b;
}

int main()
{
    int a, b, c;
    a = 123;
    b = 456;
    c = getMain(a, b);
    cout << c << endl;

    double x, y, z;
    x = 1.23;
    y = 4.56;
    z = getMain(x, y);
    cout << z << endl;

    return 0;
}