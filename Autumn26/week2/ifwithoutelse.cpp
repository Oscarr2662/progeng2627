

#include <iostream>

int main(){
    double b, n;
    // only one variable for both input and output

    std::cout << "please enter a number" << std::endl;
    std::cin >> b;

    if(b < 0){
        n = -b;
        // if n is negative we change its sign
    }
    // otherwise we don't have to do anything

    // we print the absolute value
    std::cout << "absolute value: " << b << std::endl;
}