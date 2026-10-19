#include <iostream>

int main(){
    int n, max;
    std::cin >> n;

    if(n <= 0){
        std::cout << "Please enter a positive whole number" << std::endl;
    }else{
        int steps = 0;
        max = n;
        
        while ( n != 1 ){
            if (n % 2 == 0){
                n = n / 2;
            }else{
                n = 3 * n + 1;
            }
            if (n >= max){
                max = n;
            }
            std::cout << n << "\t";
            steps = steps + 1;
        }
            std::cout << std::endl;
            std::cout << "Steps: " << steps << std::endl;
            std::cout << "Maximum number generated: " << max << std::endl;
    }
}