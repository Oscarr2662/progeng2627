#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {
    std::string filename;

    std::cout << "Enter the input filename: ";
    std::cin >> filename;

    std::ifstream infile;
    infile.open(filename);

    if (!infile.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;
    int sum = 0;

    while (infile >> tmp) {
        std::cout << tmp << std::endl;
        sum = sum + tmp;
    }

    std::cout << "Sum: " << sum << std::endl;
    infile.close();
}