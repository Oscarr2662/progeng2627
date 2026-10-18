#include <iostream>

int main(){
    double x, acc = 0;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << "*" << n << "=" << acc << std::endl;
}
// example for 2 5
//acc = 0+2 and counter becomes 1, so it returns to the loop and do it again
//it sum up for counter 0,1,2,3,4, hence we hv enuf times we need (5)