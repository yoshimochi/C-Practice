#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double data; // 平方根を求める数値
    double ans;  // dataの平方根

    cout << "平方根を求める値：";
    cin >> data;

    ans = sqrt(data);

    cout << ans << endl;

    return 0;
}