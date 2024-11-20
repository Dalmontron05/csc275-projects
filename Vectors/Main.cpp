//* Main C++ file

// Imports
#include <iostream>

using namespace std;


// Classes
template<typename T>
struct Vector {
private:
    T* array; //pointer named array that points to object
    // of type T
    int capacity;
    int size;

public:
    // Constructor
    Vector() : capacity(10), size(0)
    {
        array = new T[capacity];
    }
    // Deconstructor
    ~Vector()
    {
        delete[] array;
    }
    // Method to add elements to the vector
    void push_back(const T& element) {
        if (size == capacity) {
            // if the vector is full, double the capacity
            capacity *= 2;
            T* newArray = new T[capacity];
            for (int i = 0; i < size; ++i) {
                newArray[i] = array[i];
            }
            delete[] array;
            array = newArray;
        }
        array[size++] = element;
    }
    // Method to print the elements of the ector
    void print() const {
        for(int i = 0; i < size; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};


// Functions
int main()
{
    // Create a vector of integers
    Vector<int> intVector;
    //  add some elements to the vector
    for(int i=0; i<=10; ++i) {
        intVector.push_back(i * 10);
    }
    // Print the elements of the vector
    cout << "Vector of integers: ";
    intVector.print();
}

