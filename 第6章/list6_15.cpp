#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
    string name;

public:
    void speak();
    Dog(string name);
};

class Cat
{
private:
    string name;

public:
    void speak();
    Cat(string name);
};

void Dog::speak()
{
    cout << this->name << "：ワン！" << endl;
}

Dog::Dog(string name)
{
    this->name = name;
}

void Cat::speak()
{
    cout << this->name << "：ニャー！" << endl;
}

Cat::Cat(string name)
{
    this->name = name;
}

int main()
{
    Dog pochi("ポチ");
    Cat tama("タマ");

    pochi.speak();
    tama.speak();

    return 0;
}