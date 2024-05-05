#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    float length; // the length of the rectangle
    float width;  // the width of the rectangle

public:
    Rectangle();                  // default constructor
    float getLength();            // accessor method for length
    void setLength(float length); // mutator method for length
    float getWidth();             // accessor method for width
    void setWidth(float width);   // mutator method for width
    float calculateArea();        // calculates and returns the area of the rectangle
};

#endif

#include "Rectangle.h"

Rectangle::Rectangle()
{
    length = 0.0;
    width = 0.0;
}

float Rectangle::getLength()
{
    return length;
}

void Rectangle::setLength(float length)
{
    this->length = length;
}

float Rectangle::getWidth()
{
    return width;
}

void Rectangle::setWidth(float width)
{
    this->width = width;
}

float Rectangle::calculateArea()
{
    return length * width;
}

#include <iostream>
#include "Rectangle.h"

using namespace std; // using the entire std namespace

int main()
{
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rectangle;
    rectangle.setLength(length);
    rectangle.setWidth(width);

    float area = rectangle.calculateArea();

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
