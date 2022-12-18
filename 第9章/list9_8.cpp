// バイナリファイルの読み出し
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data;

    ifstream fin("myfile.bin", ios::in | ios::binary);

    if (!fin.is_open())
    {
        cout << "ファイルを開けません" << endl;

        return 1;
    }

    while (fin.get(data))
    {
        cout << "[" << (int)data << "]" << endl;
    }

    cout << endl;

    fin.close();

    return 0;
}