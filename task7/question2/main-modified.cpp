#include <iostream>
#include "Rectangle.h"

int main() {
    // Creating rectangle using default constructor and setting values via accessor methods
    Rectangle rect1;
    float length1, width1;

    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length1;
    rect1.setLength(length1);

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width1;
    rect1.setWidth(width1);

    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    // Creating rectangle using overloaded constructor
    float length2, width2;

    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length2;

    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;

    Rectangle rect2(length2, width2);

    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}
