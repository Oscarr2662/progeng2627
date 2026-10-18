#include <iostream>

int main(){
    
    int n, factorial = 1;
    std::cin >> n;

    if(n >= 0){
        for(int i = 1; i <= n; i++){
        factorial = factorial * i;
        }
        std::cout << n << "!" << " " << "=" << " " << factorial << std::endl;
    }
    else{
        std::cout << "n must be greater than 0" << std::endl;
    }
}