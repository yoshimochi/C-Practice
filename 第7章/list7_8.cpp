// デフォルトコンストラクタを自動生成するプログラム
#include <iostream>
#include <string>
using namespace std;

class Pupil
{
private:
    string name;
    int point;

public:
    void speak();
};

void Pupil::speak()
{
    cout << "氏名：" << this->name << endl;
    cout << "得点：" << this->point << endl;
}

int main()
{
    Pupil p;

    return 0;
}