#include <iostream>

void rectangle(double length, double width, double& perimeter, double& area){
    perimeter = 2* (length + width);
    area = length * width;
}

int main(){
    double length, width;
    double perimeter, area;

    std::cout << " Enter the rectangle's length and width: ";
    std::cin >> length >> width;

    rectangle(length, width, perimeter, area);

    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;
}