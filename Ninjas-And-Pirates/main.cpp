//* Main C++ file

//TODO: make turn based combat i guess?

// Imports
#include <iostream>
#include <string>

// #include "main.h"

using namespace std;


// Global Variables


// Classes
class Character
{
private:
    string name;
public:
    Character(string nm)
    {
        nm = name;
    }

    void attack()
    {
        cout << "attacking\n";
    }
};


class Ninja : public Character
{
public:
    using Character::Character;

    void attack()
    {
        cout << "Slicing\n";
    }
};


class Pirate : public Character
{
public:
    using Character::Character;

    void attack()
    {
        cout << "Slashing\n";
    }
};


// Functions
int main()
{
    Character joe("Joe");
    joe.attack();

    Ninja genji("Genji");
    genji.attack();

    Pirate jack("Jack");
    jack.attack();
}

