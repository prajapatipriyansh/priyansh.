#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    // Parameterized constructor with one parameter
    Rectangle(float side) {
        length = side;
        width = side;
    }

    // Parameterized constructor with two parameters
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    float calculateArea() {
        return length * width;
    }
};

int main() {
    // Creating objects using different constructors
    Rectangle square1; // Default constructor
    Rectangle square2(5.0); // Constructor with one parameter
    Rectangle rectangle(4.0, 6.0); // Constructor with two parameters

    // Calculating and displaying area for each object
    cout << "Area of square1: " << square1.calculateArea() << endl;
    cout << "Area of square2: " << square2.calculateArea() << endl;
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}
