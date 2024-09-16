//* Main C++ file

// Imports
#include <iostream>
#include <string>

// #include "main.h"

using namespace std;


// Classes
class Human
{
private:
    string firstName;
    string lastName;
    int age;
    int idNumber;
public:
    Human(string firstName, string lastName, int age, int idNumber)
    {
        this -> firstName = firstName;
        this -> lastName = lastName;
        this -> age = age;
        this -> idNumber = idNumber;
    }

    // first name methods
    void setfirstName(string setfirstName)
    {
        firstName = setfirstName;
    }

    string getFirstName()
    {
        cout << firstName << endl;
        return firstName;
    }

    // last name methods
    void setLastName(string setLastName)
    {
        lastName = setLastName;
    }

    string getLastName()
    {
        cout << lastName << endl;
        return lastName;
    }

    // age methods
    void setAge(int setAge)
    {
        age = setAge;
    }

    int getAge()
    {
        cout << age << endl;
        return age;
    }

    // id number methods
    void setIdNumber(int setIdNumber)
    {
        idNumber = setIdNumber;
    }

    int getIdNumber()
    {
        cout << idNumber << endl;
        return idNumber;
    }

    // others
    void breath()
    {
        cout << "Humans can breath!" << endl;
    }

    void walk()
    {
        cout << "Humans cna walk!" << endl;
    }

    void greet()
    {
        cout << "Humans can greet!" << endl;
    }

    void eat()
    {
        cout << "Humans can eat" << endl;
    }
};

class American : public Human
{
public:
    using Human::Human; // uses constructor of parent class, doesn't do it automatically so you have to manually write this or the line below it
    // American(string firstName, string lastName, int age, int idNumber): Human(firstName, lastName, age, idNumber){}
    void eat()
    {
        cout << "American eat using forks" << endl;
    }
};

class French : public Human{
public:
    using Human::Human;
    void eat()
    {
        cout << "French eat using spoons" << endl;
    }
};


// Functions
int main()
{
    // Human human1("Adam", "Eve", 4500, 001);
    // human1.eat();
    // human1.breath();
    // human1.greet();

    American american1("John", "Doe", 250, 111);
    american1.eat();
    american1.breath();
    american1.greet();

    French french1("Charles", "French", 25, 123);
    french1.eat();
    french1.breath();
    french1.greet();
}

