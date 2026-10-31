#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){
    //sum_vector is the name of the function

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    double element, n;
    std::vector<double> v;
    //we define the vector and the type with its name
    //vector//type//name

    std::cout << "How many elements do you want to enter?" << std::endl;
    std::cin >> n;

    std::cout << "Type the elements" << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cin >> element;
        v.push_back(element);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}