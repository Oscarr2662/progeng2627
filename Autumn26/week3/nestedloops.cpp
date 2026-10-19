#include <iostream>

int main(){
    int n, c = 0, c1 = 0;
    std::cin >> n;

    while(c < n){
        c1 = 0;

        while (c1 < n){
          c1 = c1 + 1;
        std::cout << "*" << "\t";
        }

        c = c + 1;
        std::cout << std::endl;
        
    }
}
