#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout << "How many numbers?" << std::endl;
    std::cin >> n;

    std::vector<double> values;
    std::cout << "Enter the n numbers. " << std::endl;

    for (int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;
        values.push_back(number);
    }
    int s;
    std::cout << "Enter the s " << std::endl;
    std::cin >> s;
/*
The program then reads a number s from the user and 
prints how many occurrences of s are contained in the vector.
*/
    int sum = 0;
    for (int i = 0; i < values.size(); i++){
        if (values[i] == s){
            sum = sum + 1;
        }
    }
    std::cout << "there are " << sum << " " << "occurences of" << " " << s << " " << "at indices: "<< std::endl;

    for (int i = 0; i < values.size(); i++)
    {
        if(values[i] == s){
            std::cout << i << std::endl;
        }
    }
    
}   