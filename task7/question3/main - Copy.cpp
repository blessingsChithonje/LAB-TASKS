#include <iostream>
#include "Shapes.h"

int main() {
    using namespace shapes;

    Square square;
    float sideLength;

    std::cout << "Enter the side length of the square: "<< endl;
    std::cin >> sideLength;
    square.setSideLength(sideLength);

    Triangle triangle;
    float base, height;

    std::cout << "Enter the base of the triangle: "<< endl;
    std::cin >> base;
    triangle.setBase(base);

    std::cout << "Enter the height of the triangle: "<< endl;
    std::cin >> height;
    triangle.setHeight(height);

    Circle circle;
    float radius;

    std::cout << "Enter the radius of the circle: "<< endl;
    std::cin >> radius;
    circle.setRadius(radius);

    std::cout << "Area of the square: " << Area::calculateArea(square) << std::endl;
    std::cout << "Area of the triangle: " << Area::calculateArea(triangle) << std::endl;
    std::cout << "Area of the circle: " << Area::calculateArea(circle) << std::endl;

    return 0;
}
