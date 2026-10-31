#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
 //   vout.clear(); (optional)
    for (int i = 0; i < vin1.size(); i++)
    {
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); i++)
    {
        vout.push_back(vin2[i]);
    }
    

}


int main(){
   std::vector<int> vin1, vin2, result;
   int n1, n2, number;

   std::cout << "How many elements in vin1? ";
   std::cin >> n1;

   std::cout << "Enter the elements of vin1: ";
   for (int i = 0; i < n1; i++)
   {
    std::cin >> number;
    vin1.push_back(number);
   }

   std::cout << "How many eements in vin2? ";
   std::cin >> n2;

   std::cout << "Enter the elements of vin2: ";
    for (int i = 0; i < n2; i++)
    {
        std::cin >> number;
        vin2.push_back(number);
    }
    
    append_vectors(vin1, vin2, result);

    std::cout << "Combined vector: ";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }

    std::cout << std::endl;
    
   
}