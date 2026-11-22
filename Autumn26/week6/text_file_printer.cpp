#include <iostream>
#include <fstream>
#include <cstdlib>

int main( int argc, char* argv[]){
    if (argc != 2)
    {
        std::cout << "Please provide one filename";
        return EXIT_FAILURE;
    }

    std::ifstream infile;
    infile.open(argv[1]);

    if (!infile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    char c;
    while (infile.get(c))
    {
        std::cout << c;
    }

    infile.close();
    
    
}