#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for ( int row = 1; row <= n; row++){
      for ( int column = 1; column <= n; column++){
        std::cout << row * column << "\t";
      }
      std::cout << std ::endl;
    }
    
}