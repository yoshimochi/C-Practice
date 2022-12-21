// 配列の最小値を返す関数を関数テンプレートで定義
#include <iostream>
using namespace std;

template <class T>
T getMain(T a, T b)
{
    return a < b ? a : b;
}

template <class T1, class T2>
T1 getMain(T1 a[], T2 length)
{
    T1 ans = a[0];
    for (T2 i = 1; i < length; i++)
    {
        if (ans > a[i])
        {
            ans = a[i]
        }
    }
    return ans;
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

    char cArray[] = {'c', 'b', 'f', 'a', 'e'};
    int cLength = 5;
    char cAns = getMain(cArray, cLength);
    cout << cAns << endl;

    float fArray[] = {2.22F, 3.33F, 1.11F, 5.55F, 4.44F};
    int fLength = 5;
    float fAns = getMain(fArray, fLength);
    cout << fAns << endl;

    return 0;
}