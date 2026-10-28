#include <iostream>

double maximum(double a, double b){
    if (a >= b ){
        return a;
    }else{
        return b;
    }
}

int main(){
    double n1, n2;

    std::cout << "Enter two numbers: ";
    std::cin >> n1 >> n2;
    
    double largest = maximum (n1, n2);
    std::cout << "The largest is " << largest << std::endl;
}