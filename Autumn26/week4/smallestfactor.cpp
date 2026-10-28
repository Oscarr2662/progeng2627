#include <iostream>

int smallest_factor(int n){

    for (int cf = 2; cf <= n / cf; cf++)
    {
        if(n % cf == 0){
            return cf;
        }
    }
    return 0;
    
}

int main(){
    int n;
    std::cout << "Enter an integer greater than 1: ";
    std::cin >> n;

    if (n <= 1){
        std::cout << "Invalid input" << std::endl;
    }else{
        int factor = smallest_factor(n);

        if(factor == 0){
            std::cout << "The number is prime" << std::endl;
        }else{
            std::cout << "Smallest prime factor:" << factor << std::endl;
        }
}
}
//how does it always give the smallest prime factor?
//Because it tests candidates in increasing order: 2, 3, 4, 5, …, 
//then returns immediately when it finds one.

//That first factor must also be prime. If it were composite, 
//one of its smaller prime factors would divide n too—
//and the loop would already have found it.

//For example, with 45, the loop tests 2,
// then finds 3 and returns it. 
//It never reaches the larger factors 5, 9, or 15.