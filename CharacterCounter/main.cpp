//* Main C++ file
// Counts how many times a character is present within a file
//TODO: let user input their own filename
//TODO: check for usre input (like if they don't input a character)

// Imports
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Functions
int main()
{
    // Introduction
    cout << "This Program will count the # of times a specific character is present within a file\n";

    try
    {
        // Variables
        string fileContent;
        int targetAmount = 0;
        ifstream infile("Mp4-To-Mov.sh");
        ofstream outfile("Output.txt");


        // Asks user for input
        cout << "Please enter a character: \n";
        char target;
        cin >> target;
        cin.ignore(1000, '\n');
        

        // Try to open files
        if (!infile.is_open())
        {
            throw runtime_error("Error: Unable to open the input file");
        }
        
        if (!outfile.is_open())
        {
            throw runtime_error("Error: Unable to open the output file");
        }


        cout << "Contents of File:\n";
        while (getline(infile, fileContent)) // Saves content of file to fileContent
        {
            cout << fileContent << endl;

            // Searches files for target
            for (size_t i = 0; i < fileContent.length(); i++)
            {
                if (fileContent[i] == target)
                {
                    // Counts up how many times target is within the file
                    targetAmount++;
                }
            }
        }
        cout << "End of File\n";

        // Print how many times we found target character and save it to file

        cout << "Found '" << target << "' " << targetAmount << " times.\n";
        outfile << "Found '" << target << "' " << targetAmount << " times.\n";


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

