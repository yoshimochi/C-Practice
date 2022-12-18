// テキストファイルからの読み出し
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;

    ifstream fin("myfile.txt");

    if (!fin.is_open())
    {
        cout << "ファイルを開くことができません" << endl;

        return 1;
    }

    while (getline(fin, s))
    {
        cout << s << endl;
    }

    fin.close();

    return 0;
}