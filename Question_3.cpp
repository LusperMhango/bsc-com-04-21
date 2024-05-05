// Including necessary libraries
#include <iostream>
#include <cmath>
using namespace std;

// Defining namespace shapes
namespace shapes
{

    // Square class
    class Square
    {
    private:
        double side_length;

    public:
        Square() : side_length(0) {}
        Square(double side_length) : side_length(side_length) {}
        ~Square() {}
        double getSideLength() { return side_length; }
        void setSideLength(double side_length) { this->side_length = side_length; }
    };

    // Triangle class
    class Triangle
    {
    private:
        double base, height;

    public:
        Triangle() : base(0), height(0) {}
        Triangle(double base, double height) : base(base), height(height) {}
        ~Triangle() {}
        double getBase() { return base; }
        double getHeight() { return height; }
        void setBase(double base) { this->base = base; }
        void setHeight(double height) { this->height = height; }
    };

    // Circle class
    class Circle
    {
    private:
        double radius;

    public:
        Circle() : radius(0) {}
        Circle(double radius) : radius(radius) {}
        ~Circle() {}
        double getRadius() { return radius; }
        void setRadius(double radius) { this->radius = radius; }
    };
}

// Area class
#define M_PI 3.14159265358979323846

class Area
{
public:
    // Calculate the area of a square based on a square object passed into it
    static double calculateArea(shapes::Square square)
    {
        // Return the square of the side length of the square
        return pow(square.getSideLength(), 2);
    }

    // Calculate the area of a triangle based on a triangle object passed into it
    static double calculateArea(shapes::Triangle triangle)
    {
        // Return half of the base multiplied by the height of the triangle
        return 0.5 * triangle.getBase() * triangle.getHeight();
    }

    // Calculate the area of a circle based on a circle object passed into it
    static double calculateArea(shapes::Circle circle)
    {
        // Return the product of pi and the square of the radius of the circle
        return M_PI * pow(circle.getRadius(), 2);
    }
};

// Main function
int main()
{
    int choice;
    do
    {
        // Display options for the user
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "enter ur preffered option: " << endl;

        // Get user's choice
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // Calculate the area of a square
            double side;
            cout << "Enter side length: ";
            cin >> side;

            // Create a square object with the provided side length
            shapes::Square square(side);

            // Calculate and display the area of the square
            cout << "Area: " << Area::calculateArea(square) << "\n";
            break;
        }
        case 2:
        {
            // Calculate the area of a triangle
            double base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;

            // Create a triangle object with the provided base and height
            shapes::Triangle triangle(base, height);

            // Calculate and display the area of the triangle
            cout << "Area: " << Area::calculateArea(triangle) << "\n";
            break;
        }
        case 3:
        {
            // Calculate the area of a circle
            double radius;
            cout << "Enter radius: ";
            cin >> radius;

            // Create a circle object with the provided radius
            shapes::Circle circle(radius);

            // Calculate and display the area of the circle
            cout << "Area: " << Area::calculateArea(circle) << "\n";
            break;
        }
        case 4:
            // Exit the program
            cout << "Exiting...\n";
            break;
        default:
            // Invalid choice, prompt the user to try again
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
