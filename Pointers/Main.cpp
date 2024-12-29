//* Main C++ file

// Imports
#include <iostream>
#include <string>

// #include "main.h"

using namespace std;


// Global Variables


// Classes


// Functions
int main()
{
    // Declare and initalize a pointer
    int* intPtr = nullptr;

    // Declare and initialize a variable
    int myNumber = 42;

    // Assign the address if the vairable to the pointer
    intPtr = &myNumber;

    // Experiments
    cout << "Address of myNumber " << &myNumber << endl;
    cout << "Value of myNumber: " << myNumber << endl;
    cout << "Address stored in intPtr: " << intPtr << endl;
    cout << "Value pointed my intPtr: " << *intPtr << endl;

    // change the value of the variable through the pointer
    *intPtr = 100;  // myNumber = 100
    cout << "Updated value of myNumber = " << myNumber << endl;

    // Dynamic memory allocation using 'new'
    int* dynamicIntPtr = new int;
    *dynamicIntPtr = 200;

    // print the dynamically allocated value
    cout << "Dynamically allocated value : " << *dynamicIntPtr << endl;

    // Release dynamically allocated memory using 'delete'
    delete dynamicIntPtr;

    // with array
    int myArray[] = {1, 2, 3, 4, 5};
    int* arrayPtr = myArray;

    // Access array elements using pointers
    cout << "Array elements using pointer: ";
    for (int i = 0; i < 5; i++) // {1, 2, 3, 4, 5} and now * refers to element 0
    {
        cout << *(arrayPtr + i);
    }
    cout << endl;
}

