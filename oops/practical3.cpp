#include <iostream>
using namespace std;

class Shape
{
public:
    // Area of square
    float area(float side)
    {
        return side * side;
    }

    // Area of rectangle
    float area(float length, float breadth)
    {
        return length * breadth;
    }

    // Area of circle
    float area(double radius)
    {
        return 3.14159 * radius * radius;
    }

    // Area of triangle
    float area(float base, float height, int)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Shape s;
    int choice;

    do
    {
        cout << "\n========== AREA CALCULATOR ==========\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Circle\n";
        cout << "4. Triangle\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            float side;

            cout << "Enter side of square: ";
            cin >> side;

            cout << "Area of Square = " << s.area(side) << endl;
            break;
        }

        case 2:
        {
            float length, breadth;

            cout << "Enter length: ";
            cin >> length;

            cout << "Enter breadth: ";
            cin >> breadth;

            cout << "Area of Rectangle = "
                 << s.area(length, breadth) << endl;
            break;
        }

        case 3:
        {
            double radius;

            cout << "Enter radius: ";
            cin >> radius;

            cout << "Area of Circle = "
                 << s.area(radius) << endl;
            break;
        }

        case 4:
        {
            float base, height;

            cout << "Enter base: ";
            cin >> base;

            cout << "Enter height: ";
            cin >> height;

            cout << "Area of Triangle = "
                 << s.area(base, height, 0) << endl;
            break;
        }

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}s
