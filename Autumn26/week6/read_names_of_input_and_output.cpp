#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;


    std::string outputfilename;
    // as usual not a special name
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;





    std::ifstream infile; 
    infile.open(inputfilename);

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }
    infile.close(); 

   

    
    std::ofstream outfile;
    outfile.open(outputfilename);
    
    if (!outfile.is_open())
    {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    for (int i = static_cast<int> (v.size()) -1 ; i >= 0; i--)
    {
        outfile << v[i] << std::endl;
    }
    outfile.close();
    
}