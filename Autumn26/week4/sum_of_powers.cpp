#include <iostream>
#include <cmath>

int main(){
    double x, n, sum;
    std::cout << "Please enter x and n for the sum of powers." << std::endl;
    std::cin >> x >> n;

   if ((x < 0) && (n > 0)) {
    std::cout << "Please change your input for x and n." << std::endl;
} else if ((x == 0) && (n < 0)) {
    std::cout << "Please change your input for x and n." << std::endl;
} else{
    for (int i = 1; i <= n; i++)
    {
        sum = std::pow(x, i) + sum ;
    }
}

    std::cout << "The sum of powers is " << sum << std::endl;
    }
    
    












