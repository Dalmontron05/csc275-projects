//* Main C++ file

// Imports
#include <iostream>
#include <thread>

using namespace std;

// Classes
//  Shared resouces(normal function)
void foo1(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Thread using function fool" << endl;
    }
}

void foo2(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Thread using function foo2" << endl;
    }
}

void foo3(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Thread using function foo3" << endl;
    }
}


// Functions
int main()
{
    cout << "Threads 1 and 2 and 3 operating independently";
    thread th1(foo1, 3);
    thread th2(foo2, 3);
    thread th3(foo3, 3);

    // Join (makes sure end of program (or maybe scope?) doesn't happen until the thread being joined is completed)
    th1.join();
    th2.join();
    th3.join();
}

