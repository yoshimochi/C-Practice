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
    switch (channel)
    {
    case 1:
        stationName = "NHK総合";
        break;
    case 2:
        stationName = "Eテレ";
        break;
    case 4:
        stationName = "日テレ";
        break;
    case 5:
        stationName = "テレ朝";
        break;
    case 6:
        stationName = "TBS";
        break;
    case 7:
        stationName = "テレ東";
        break;
    case 8:
        stationName = "フジテレビ";
        break;
    default:
        stationName = "割り当てなし";
        break;
    }

    // 　テレビ局名を表示
    cout << stationName << endl;

    return 0;
}