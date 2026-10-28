#include <iostream>
#include <string>

void myswap(std::string& a, std::string& b){
    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;
}
    int main(){
        std::string first, second;

        std::cout << "Enter two words: ";
        std::cin >> first >> second;

        std::cout << "Before: " << first << " " << second << std::endl;

        myswap(first , second);

        std::cout<< "After: " << first << " " << second << std::endl;
    }