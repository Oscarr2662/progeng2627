#include <iostream>
#include <vector>

int main(){
    int n;
    std::cout << "How many numbers?" << std::endl;
    std::cin >> n;

    std::vector<double> values;
    std::cout << "Enter the numnbers. " << std::endl;

    for (int i = 0; i < n; i++)
    {
        double number;
        std::cin >> number;
        values.push_back(number);
    }
    double t;
    std::cout << "Enter the threshold " << std::endl;
    std::cin >> t;

    for (int i = 0; i < values.size(); i++){
        if (values[i] < t){
            std::cout << values[i] << std::endl;
        }
    }
}