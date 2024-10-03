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
        ifstream infile("Mp4-To-Mov-Old.sh");
        if (!infile.is_open())
        {
            throw runtime_error("Error: Unable to open the input file");
        }

        // Try to open the output file
        ofstream outfile("Mp4-To-Mov.sh");
        if (!outfile.is_open())
        {
            throw runtime_error("Error: Unable to open the output file");
        }

        char target = ';';

        while (getline(infile, line))
        {
            for (size_t i = 0; i < line.length(); ++i)
            {
                if (line[i] == target)
                {
                    std::cout << "Character found at position: " << i << std::endl;
                }
            }
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

