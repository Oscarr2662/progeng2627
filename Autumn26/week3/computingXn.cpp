#include <iostream>

int main(){
    double x, acc = 1;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc * x;
        counter = counter + 1;
    }

    std::cout << x << "^" << n << "=" << acc << std::endl;
}
//to compute x^n:
//initialise a variable e.g. "acc" (for "accumulator") to 1
//do the following step n times:
//multiply acc times x, and store the result back in acc
//at the end the number in acc will be x^n