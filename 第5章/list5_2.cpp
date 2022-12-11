// stringクラスで文字列の長さを求めるプログラム
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ans;
    string s;

    s = "Hello, World";

    ans = s.length();

    cout << ans << endl;

    return 0;
}