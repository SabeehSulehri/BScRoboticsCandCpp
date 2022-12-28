#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {

    Circle c("circle", 3, 4, 7);
    Square s("Square", 1, 1, 3);
    Rectangle r("RECTANGLE", 7, 4, 2, 5);

    cout << "Rectangle's properties: " << endl;
    cout << "Name: " << r.getName() << endl;
    cout << "Center (x): " << r.getX() << endl;
    cout << "Center (y): " << r.getY() << endl;
    cout << "Number of sides: " << r.getEdgesNumber() << endl;
    cout << "Height: " << r.getHeight() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "Area: " << r.area() << endl << endl;

    cout << "Square's properties: " << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Center (x): " << s.getX() << endl;
    cout << "Center (y): " << s.getY() << endl;
    cout << "Number of sides: " << s.getEdgesNumber() << endl;
    cout << "Side: " << s.getSide() << endl;
    cout << "Perimeter: " << s.perimeter() << endl;
    cout << "Area: " << s.area() << endl << endl;

    cout << "Circle's properties: " << endl;
    cout << "Name: " << c.getName() << endl;
    cout << "Center (x): " << c.getX() << endl;
    cout << "Center (y): " << c.getY() << endl;
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Perimeter: " << c.perimeter() << endl;
    cout << "Area: " << c.area() << endl << endl;
    
    return 0;
}