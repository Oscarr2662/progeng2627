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
    int lower, upper;

    std::cout << "Enter two integers greater than 1 (lower < upper): ";
    std::cin >> lower >> upper;

    if (lower <= 1 || upper <= lower){
        std::cout << "Invalid input" << std::endl;
    }else{
        for (int n = lower; n <= upper; n++)
        {
            if(smallest_factor(n) == 0){
                std::cout << n << std::endl;
            }
        }
    }
    
}



/*
Revision notes:
- smallest_factor(n) expects n > 1.
- It returns the first factor found, or 0 if n is prime.
- Candidates are checked in increasing order, so the first
  factor found is the smallest and must be prime.
- cf <= n / cf checks up to and including sqrt(n).
- return cf immediately ends the function when a factor is found.
- return 0 belongs AFTER the loop: all candidates must be checked first.
- smallest_factor(n) == 0 means n is prime.
- n <= upper includes the upper endpoint of the range.
- Reusing the function avoids repeating the factor-checking code.
*/