#include <iostream>

int main(){
     double length, height, perimeter, area;

     std::cout << "please enter the length of the rectangle" << std::endl;
     std::cin >> length;

     std::cout << "please enter the height of the rectangle"<< std::endl;
     std::cin >> height;

     perimeter = (2 * height) + (2 * length);
    
     area = length * height;

     std::cout << "the perimeter is" << "=" << perimeter << std::endl;
     std::cout << "the area is" << "=" << area << std::endl;


}