#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, s3;

    s1 = "apple";
    s2 = "banana";

    if (s1 > s2)
    {
        cout << "Big" << endl;
    }
    else if (s1 < s2)
    {
        cout << "small" << endl;
    }
    else
    {
        cout << "equal" << endl;
    }

    s3 = s1 + s2;
    cout << s3 << endl;

    cout << s3.length() << endl;

    cout << s3.substr(5, 3) << endl;

    cout << s3[5] << endl;

    cout << s3.find("na") << endl;

    s3.clear();

    if (s3.empty())
    {
        cout << "is empty" << endl;
    }
    else
    {
        cout << "is not empty" << endl;
    }

    return 0;
}