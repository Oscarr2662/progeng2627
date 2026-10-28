#include <iostream>

double maximum_of_three( double a, double b, double c){
    double largest = a;

    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }

    return largest;
}

int main(){
    double n1, n2, n3;

    std::cout << "Enter three numbers: ";
    std::cin >> n1 >> n2 >> n3;
    
    double largest = maximum_of_three (n1, n2, n3);
    std::cout << "The largest is " << largest << std::endl;
}

    