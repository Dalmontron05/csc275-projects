//* Main C++ file

// Imports
#include <iostream>
#include <string>

// #include "main.h"

using namespace std;


// Global Variables


// Templates
template <typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}


// swaps two values
template <typename T>
void swapValue (T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}


// Functions
int main()
{
    // Swapping integers
    int x = 10, y = 20;
    cout << "Before Swapping: x = " << x << " and y = " << y << endl;
    swapValue(x, y);
    cout << "After Swapping: x = " << x << " and y = " << y << endl;


    // Swapping doubles
    double p = 1.5, q = 2.5;
    cout << "Before Swapping: p = " << p << " and q = " << q << endl;
    swapValue(p, q);
    cout << "After Swapping: p = " << p << " and q = " << q << endl;


    // Swapping strings
    string str1 = "Hello", str2 = "World";
    cout << "\n Before swappping: str1 = " << str1 << ", str2 = " << str2 << endl;
    swapValue(str1, str2);
    cout << "\n After swappping: str1 = " << str1 << ", str2 = " << str2 << endl;




    // cout <<" max of 3 and 7: " << getMax(3, 7) << endl;
    // cout << " max of 2.5 and 3.5 " << getMax(2.5, 7.5) << endl;
    // cout << " max of 'apple' and 'bannana' is: " << getMax(string("apple"), string("bananna"));
}

