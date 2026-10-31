//In order to keep the efficiency advantage without this drawback, 
//we can specify that the vector, although passed by reference, 
//is not meant to be changed. In order to do so, 
//we pass it by const reference (a bit like 
//sharing a doc with someone but only with viewing permissions):

#include <iostream>
#include <vector>

// note: const before std::vector<double>
// and the & afterwards

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }


    return sum;

}

int main(){
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}