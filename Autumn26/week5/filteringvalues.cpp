#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
 //   vout.clear(); (optional)

        for (int i = 0; i < vin.size(); i++)
        {
            if (vin[i] < t)
            {
                vout.push_back(vin[i]);
            }
            
        }
    }


int main(){
   std::vector<double> vin, result;
   double t, n1, number;

   std::cout << "How many elements in vin? ";
   std::cin >> n1;

   std::cout << "Enter the elements of vin: ";
   for (int i = 0; i < n1; i++)
   {
    std::cin >> number;
    vin.push_back(number);
   }

   std::cout << "Enter a number t so that the output vector countaining all the values less that t.";
   std::cin >> t;
    
   filter_v(vin, t, result);

    std::cout << "Result vector: ";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }

    std::cout << std::endl;
    
   
}