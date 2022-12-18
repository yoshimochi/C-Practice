// テキストファイルへ書き込むプログラム
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ファイルオープン
    ofstream fout("myfile.txt");

    if (!fout.is_open())
    {
        cout << "ファイルを開くことができません" << endl;

        return 1;
    }

    fout << "hello, world" << endl;
    fout << "みなさん、こんにちは" << endl;

    fout.close();
    cout << "ファイルに書き込みました。" << endl;

    return 0;
}
