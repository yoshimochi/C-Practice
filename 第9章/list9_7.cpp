// バイナリファイルへの書き込み
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("myfile.bin", ios::out | ios::binary);

    if (!fout.is_open())
    {
        cout << "ファイルを開くことができません" << endl;

        return 1;
    }

    for (char data = 1; data <= 10; data++)
    {
        fout.put(data);
    }

    fout.close();
    cout << "ファイルに書き込みました" << endl;

    return 0;
}