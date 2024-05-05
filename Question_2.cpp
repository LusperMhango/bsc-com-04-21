#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length; // Private member variable for length
    float width;  // Private member variable for width

public:
    Rectangle();                 // Default constructor
    Rectangle(float l, float w); // Overloaded constructor
    ~Rectangle();                // Destructor

    void setLength(float l); // Setter for length
    float getLength();       // Getter for length

    void setWidth(float w); // Setter for width
    float getWidth();       // Getter for width

    float calculateArea(); // Member function to calculate area
};

Rectangle::Rectangle()
{
    length = 0.0; // Initialize length to zero
    width = 0.0;  // Initialize width to zero
}

Rectangle::Rectangle(float l, float w)
{
    length = l; // Assign provided length value
    width = w;  // Assign provided width value
}

Rectangle::~Rectangle()
{
    // Destructor does nothing for now
}

void Rectangle::setLength(float l)
{
    length = l; // Assign provided length value
}

float Rectangle::getLength()
{
    return length; // Return length value
}

void Rectangle::setWidth(float w)
{
    width = w; // Assign provided width value
}

float Rectangle::getWidth()
{
    return width; // Return width value
}

float Rectangle::calculateArea()
{
    return length * width; // Calculate and return area
}

int main()
{
    float length, width;

    Rectangle rectangle1;
    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    rectangle1.setLength(length);
    cout << "Enter the width of the first rectangle: ";
    cin >> width;
    rectangle1.setWidth(width);
    cout << "Area of the first rectangle: " << rectangle1.calculateArea() << endl;

    Rectangle rectangle2;
    cout << "Enter the length of the second rectangle: ";
    cin >> length;
    rectangle2.setLength(length);
    cout << "Enter the width of the second rectangle: ";
    cin >> width;
    rectangle2.setWidth(width);
    cout << "Area of the second rectangle: " << rectangle2.calculateArea() << endl;

    return 0;
}
