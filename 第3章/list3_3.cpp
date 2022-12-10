#include <iostream>
#include <string>
using namespace std;

int main()
{
    int channel;        // 　チャンネル番号
    string stationName; // テレビ局名

    // キー入力をchannelに格納
    cout << "チャンネル番号を入力してください : ";
    cin >> channel;

    // テレビ曲名をstationNameに格納する
    if (channel == 1)
    {
        stationName = "NHK総合";
    }
    else if (channel == 2)
    {
        stationName = "Eテレ";
    }
    else if (channel == 4)
    {
        stationName = "日テレビ";
    }
    else if (channel == 5)
    {
        stationName = "テレ朝";
    }
    else if (channel == 6)
    {
        stationName = "フジテレビ";
    }
    else
    {
        stationName = "割り当てなし";
    }

    // 　テレビ局名を表示
    cout << stationName << endl;

    return 0;
}