//* Main C++ file
// Counts how many times a character is present within a file

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

    string fileContent;
    try
    {
        // Variables
        int targetAmount = 0;

        // Asks user for input
        cout << "Please enter a character: \n";
        char target;
        cin >> target;
        cin.ignore(1000, '\n');
        
        // Try to open file
        ifstream file("Mp4-To-Mov.sh");
        if (!file.is_open())
        {
            throw runtime_error("Error: Unable to open the input file");
        }


        // Searches file for target
        cout << "Contents of File:\n";
        while (getline(file, fileContent)) // Saves content of file to fileContent
        {
            cout << fileContent << endl;
            // for each instance of target...
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
        cout << "Found '" << target << "' " << targetAmount << " times.\n";

        // close the files
        file.close();
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

