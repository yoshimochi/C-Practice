#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;

public:
    virtual void speak() = 0;
    Animal(string name);
};

class Dog : public Animal
{
public:
    void speak();
    Dog(string name);
};

class Cat : public Animal
{
public:
    void speak();
    Cat(string name);
};

Animal::Animal(string name)
{
    this->name = name;
}

void Dog::speak()
{
    cout << this->name << "：ワン！" << endl;
}

Dog::Dog(string name) : Animal(name)
{
}

void Cat::speak()
{
    cout << this->name << "：ニャー！" << endl;
}

Cat::Cat(string name) : Animal(name)
{
}

void sub(Animal *p)
{
    p->speak();
}

int main()
{
    Dog pochi("ポチ");
    Cat tama("タマ");

    sub(&pochi);
    sub(&tama);

    return 0;
}