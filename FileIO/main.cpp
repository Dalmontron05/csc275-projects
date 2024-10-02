//* Main C++ file

// Imports
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Functions
int main()
{
    string line;
    try
    {
        // Try to open the input file
        ifstream infile("example.txt");
        if (!infile.is_open())
        {
            throw runtime_error("Error: Unable to open the input file");
        }

        // Try to open the output file
        ofstream outfile("output.txt");
        if (!outfile.is_open())
        {
            throw runtime_error("Error: Unable to open the output file");
        }

        while (getline(infile, line))
        {
            cout << line << endl;
            outfile << line << endl; // write to output file
        }
        // close the files
        infile.close();
        outfile.close();
    }
    catch (const ifstream::failure& e)
    {
        cerr << "File handling error!" << e.what() << endl;
    }
    catch (const runtime_error& e)
    {
        cerr << e.what() << endl;
    }
    catch (...)
    {
        cerr << "An unexpected error occured";
    }
    
}

