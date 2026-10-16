#include <iostream>

int main() {
   int n, rem;

   std::cout << "Please enter a number" << std::endl;
   std::cin >> n;

   rem = n % 3;

   if(rem ==0){

    std::cout << "the number is a multiple of 3" << std::endl;
   }
   else{
    std::cout << "the number is not a multiple of 3" << std::endl;
   }








}