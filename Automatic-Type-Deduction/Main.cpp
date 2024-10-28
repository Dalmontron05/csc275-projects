//* Main C++ file

// Imports
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/* Automatic type deduction in c++ is typically achieved using the 'auto' keyword which allows the compliler to deduce the type of variable based on it's initial value.
That's helpful in complex expressions, generic programming, and with templates.*/

// Function with return pair
// pair<int, string>getPair()
// {
//     return (41, "Answer");
// }

// Template function
template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b)
{
    return a + b;
}


// Functions
int main()
{
    auto a = 10; // int
    auto b = 3.14; // double
    auto c = 'x'; // char
    auto d = true; // bool
    cout << "a (int): " << a << endl;
    cout << "b (double): " << b << endl;
    cout << "c (char): " << c << endl;
    cout << "d (ture): " << d << endl;

    // auto with expressions
    auto result = a + b;
    cout << "Result (double): " << result << endl;

    // auto with vectors
    vector<int> numbers = {1, 2, 3, 4, 5};
    for(auto num: numbers)
    {
        cout << "num in vector<int>: " << num << endl;
    }

    // auto with iterators
    auto it = numbers.begin();
    cout << "First element via iterator: " << *it << endl;

    // auto with function return types
    // auto pairResult = getPair();
    // cout << "Pair result: " << pairResult.first << ", " << pairResult.second << endl;

    // auto with templates
    auto sumInt = add(3, 4);
    cout << "Sum of Integers: " << sumInt << endl;

    auto sumDouble = add(3.14, 5.23);
    cout << "Sum of Doubles: " << sumDouble << endl;

    auto sumMixed = (10, 10.5);
    cout << "Sum of Int and Doubles: " << sumMixed << endl;

}

