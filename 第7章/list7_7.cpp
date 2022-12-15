#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;

public:
    void speak();
    void speak(string decoration);
    Person(string name);
};

void Person::speak()
{
    cout << this->speak << endl;
}

void Person::speak(string decoration)
{
    cout << decoration << endl;
    cout << this->name << endl;
    cout << decoration << endl;
}

Person::Person(string name)
{
    this->name = name;
}

int main()
{
    Person p("山田一郎");

    p.speak();

    p.speak("**********");

    return 0;
}