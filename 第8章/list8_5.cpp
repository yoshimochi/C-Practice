#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    int getData()
    {
        return this->data;
    }

    MyClass(int data)
    {
        cout << "コンストラクタが呼び出されました。" << endl;
        this->data = data;
    }

    ~MyClass()
    {
        cout << "デストラクタが呼び出されました。" << endl;
    }

    MyClass(const MyClass &obj)
    {
        cout << "コピーコンストラクタが呼び出されました。" << endl;
        this->data = obj.data;
    }
};

int main()
{
    MyClass obj1(123);
    cout << "obj1のメンバ変数dataの値：" << obj1.getData() << endl;
    cout << "--------------------------------------------------" << endl;

    MyClass obj2(456);
    cout << "obj2のメンバ変数dataの値(代入前)：" << obj2.getData() << endl;
    cout << "--------------------------------------------------" << endl;

    obj2 = obj1;
    cout << "obj2のメンバ変数dataの値(代入後)：" << obj2.getData() << endl;
    cout << "--------------------------------------------------" << endl;

    return 0;
}