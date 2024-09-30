//* Main C++ file

// Imports
#include <iostream>
#include <string>
#include <fstream>

// #include "main.h"

using namespace std;


// Global Variables


// Classes


// Functions
int main()
{
    string line;
    ifstream infile("example.txt");
    ofstream outfile("output.txt");

    if (infile.is_open())
    {
        if (outfile.is_open())
        {
            while(getline(infile, line))
            {
                cout << line << endl;
                outfile << line << endl;
            }
        }
        else
        {
            cout << "Unable to open outfile" << endl;
        }
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
}

