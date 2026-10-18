#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a >= 0 && b > 0) {
        int quotient = 0;
        int remainder = a;

        while (remainder >= b) {
            remainder = remainder - b;
            quotient = quotient + 1;
        }

        std::cout << "Quotient: " << quotient << std::endl;
        std::cout << "Remainder: " << remainder << std::endl;
    }
    else {
        std::cout << "Invalid input" << std::endl;
    }
}