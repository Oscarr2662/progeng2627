#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if(vin.empty()){
        return -1;
    }
    
    int smallest = 0;
    for (int i = 1 ; i < vin.size(); i++){
        if (vin[i] < vin[smallest])
        {
            smallest = i;
        }
        
    }
    return smallest;
    
   
    
}


int main(){
    double element, n;
    std::vector<double> v;

    std::cout << "How many elements do you want to enter?" << std::endl;
    std::cin >> n;

    std::cout << "Type the elements" << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cin >> element;
        v.push_back(element);
    }

    std::cout << "The index of the smallest element in the vector is: " << min_vector_element(v) << std::endl;

}
    
