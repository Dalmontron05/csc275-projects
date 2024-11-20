//* polymorhism notes

// Imports
#include <iostream>
#include <vector>
using namespace std;


// Functions
class Animal
{
public:
    // displays type of animal
    void displayType()
    {
        cout << "I am an animal!" << endl;
    }

    void sound()
    {
        cout << "Animals make sounds!" << endl;
    }
};


// Derived class - inherits from animal
class Dog : public Animal
{
public:
    void displayType()
    {
        cout << "I am a dog!" << endl;
    }

    void sound()
    {
        cout << "Woof! Woof!" << endl;
    }
};


class Cat : public Animal
{
public:
    void displayType()
    {
        cout << "I am a cat!" << endl;
    }

    void sound()
    {
        cout << "Meow" << endl;
    }
};


int main()
{
    Animal animal1;
    animal1.displayType();
    animal1.sound();
    
    Dog dog1;
    dog1.displayType();
    dog1.sound();

    Cat cat1;
    cat1.displayType();
    cat1.sound();
}

