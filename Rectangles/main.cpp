// Imports
#include <iostream>

using namespace std;

class Rectangle
{
private: // properties - attributes
    double length;
    double width;

public:
    Rectangle() // Constructor: special function that kind of servers as a template
    {
        length = 0;
        width = 0;
    }

    // Setter
    void setDimensions(double len, double wid)
    {
        length = len;
        width = wid;
    }

    double calculateArea()
    {
        return length * width;
    }

    // Prints dimensions and area to console
    void display()
    {
        cout << "Rectangle dimensions: " << length << " x " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    Rectangle rect1;
    rect1.setDimensions(5.0, 3.0);
    rect1.display();
    cout << endl;

    Rectangle rect2;
    rect2.setDimensions(10.0, 6.0);
    rect2.display();
    cout << endl;

    Rectangle rect3;
    rect3.setDimensions(2.0, 15.0);
    rect3.display();
    cout << endl;

    Rectangle rect4;
    rect4.setDimensions(30.0, 30.0);
    rect4.display();
}

