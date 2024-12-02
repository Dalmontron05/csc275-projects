//* Main C++ file

// Imports
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    // Create a vector of strings
    vector<string> words = {"apple", "banana", "cherry", "date", "orange"};
    // sort the words in the vector using a lambda expression
    sort(words.begin(), words.end(), [] (const string&a, const string&b) {
        return a.length() < b.length();
    });
    // print the sorted words
    cout << "Sorted words by length: " << endl;
    for(const auto& word: words) {
        cout << word << endl;
    }
    // Use std::find_if algorithm with a lambda expression to find the first word with more than 5 characters
    auto it = find_if(words.begin(), words.end(), [] (const string& word) {
        return word.length() > 5;
    });

    // print the first word with more than 5 characters
    if (it != words.end()) {
        cout << "First word with more than 5 characters: " << *it << endl;
    }
    else
    {
        cout << "No words more than 5 characters found." << endl;
    }


    // // Define a Lambda expression to add two numbers
    // auto add = [](int a, int b) {
    //     return a + b;
    // };

    // // call the lambda function and store result
    // int result = add(3, 5);
    // cout << "Result of addition: " << result << endl;
}

