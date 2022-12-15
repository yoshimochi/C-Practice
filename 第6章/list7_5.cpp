#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
    string name;

public:
    virtual void speak();
    void speakWithDecoration();
    Human(string name);
};

void Human::speak()
{
    cout << "氏名：" << this->name << endl;
}

void Human::speakWithDecoration()
{
    cout << "**********" << endl;
    this->speak();
    cout << "**********" << endl;
}

Human::Human(string name)
{
    this->name = name;
}

class Student : public Human
{
protected:
    string number;

public:
    void speak();
    Student(string name, string number);
};

void Student::speak()
{
    Human speak();
    cout << "学籍番号：" << this->number << endl;
}

Student::Student(string name, string number) : Human(name)
{
    this->number = number;
}

int main()
{
    Student yamada("山田一郎", "ABC123456");
    yamada.speakWithDecoration();
    return 0;
}
