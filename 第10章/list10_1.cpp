#include <iostream>
using namespace std;

int getMain(int a, int b)
{
    return a < b ? a : b;
};

double getMain(double a, double b)
{
    return a < b ? a : b;
};

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