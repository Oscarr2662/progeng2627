#include <iostream>

int main(){
    int n, acc = 0;
    std::cout << "enter a number :" << std::endl;
    std::cin >> n;

    while (n != 0){
        acc = acc + n;
        std::cout << "the sum so far is :" << " " << acc << std::endl;
        std::cin >> n;
    }
    
}