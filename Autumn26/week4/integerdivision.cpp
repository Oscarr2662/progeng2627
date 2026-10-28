//In this as in other cases, we will not include any checks within the function 
//for issues with input (such as division by zero).
// Our responsibility is only to make sure that the function works 
//when the input makes sense.

#include <iostream>
void  integer_division(int a, int b, int& quotient, int& remainder){
    quotient = a / b;
    remainder = a % b;
}

int main(){
    int a, b;
    int quotient, remainder;

    std::cout << "Enter two integer numbers a and b( b must not be zero): " << std::endl;
    std::cin >> a >> b;

    integer_division(a, b, quotient, remainder);

    std::cout << "The quotient of the integer division of a divided by b: " << quotient << std::endl;
    std::cout << "The remainder of the integer division of a divided by b: " << remainder << std::endl;
}