//* Main C++ file

// Imports
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


// Classes
class Character
{
public:
    //? can't make these variables private even though they're in the constructor
    string name;
    int health = 100;
    int attackPower = 10;
    int defenseMitigation = 5;

    Character(string name, int health, int attackPower, int defenseMitigation)
    {
        this -> name = name;
        this -> health = health;
        this -> attackPower = attackPower;
        this -> defenseMitigation = defenseMitigation;
    }

    void setName(string setName)
    {
        name = setName;
    }

    // getters and printers
    void printName()
    {
        cout << "My name is " << name << endl;
    }

    int getHealth()
    {
        return health;
    }

    void printHealth()
    {
        cout << name << ": I have " << health << "hp left.\n";
    }

    int getAttackPower()
    {
        return attackPower;
    }

    void printAttackPower()
    {
        cout << name << ": I can do " << attackPower << "damage.\n";
    }

    // combat functions
    void attack()
    {
        cout << name << ": attacking!\n";
    }

    void defend(int incomingDamage)
    {
        cout << name << ": defending!\n";
        incomingDamage -= defenseMitigation;
        takeDamage(incomingDamage);
        printHealth();
    }

    void takeDamage(int incomingDamage)
    {
        cout << name << ": I took damage\n";
        health -= incomingDamage;
        printHealth();
    }

};


class Ninja : public Character
{
public:
    using Character::Character;

    // int health = 85;
    // int attackPower = 20;

    void printName()
    {
        cout << "My name is " << name << " and I am a Ninja\n";
    }

    void attack()
    {
        cout << name << ": Slicing!\n";
    }

    void defend(int incomingDamage)
    {
        cout << name << ": Deflecting!\n";
        // incomingDamage -= defenseMitigation;

        // 50/50 chance to take damage or negate all damage
        // for (int i = 0; i < 100; i++)
        // {
            bool tookDamage = (rand() % 2) != 0;
            cout << tookDamage << endl;

            if (tookDamage)
            {
                takeDamage(incomingDamage);
                printHealth();
            }
            else
            {
                cout << name << ": I deflected the damage\n";
                printHealth();
            }
        // }
    }
};


class Pirate : public Character
{
public:
    using Character::Character;

    // int health = 95;
    // int attackPower = 15;
    // int defenseMitigation = 7;

    void printName()
    {
        cout << "My name is " << name << " and I am a Pirate\n";
    }

    void attack()
    {
        cout << name << ": Slashing\n";
    }
};


// Functions
int main()
{
    Ninja genji("Genji", 85, 20, 0);
    Pirate jack("Jack", 100, 14, 7);

    genji.printName();
    jack.printName();
    cout << endl;

    // Round 1 (how it's different from the other rounds: genji deflects instead of attacking)
    cout << "Round 1:\n";

    // fighting
    jack.attack();
    genji.defend(jack.getAttackPower());
    cout << endl;

    // Makes genji and jack fight for 4 turns
    for (int i = 0; i < 4; i++)
    {
        // introduces the round
        int j = i + 2;
        cout << "Round " << j << ":\n";

        // fighting
        genji.attack();
        jack.takeDamage(genji.getAttackPower());

        jack.attack();
        genji.takeDamage(jack.getAttackPower());
        cout << endl;
    }
    cout << endl;

    // Determines the winner
    if (genji.getHealth() > jack.getHealth())
    {
        cout << "The Ninja Wins!";
    }
    else if (genji.getHealth() == jack.getHealth())
    {
        cout << "It's a Tie!";
    }
    else
    {
        cout << "The Pirate Wins!";
    }
}

