#include <iostream>

int main(){
    double x, ans= 1;
    int n;
    std::cin >> x >> n;
    if(n >= 0){
    
        for(int i =0; i < n ; i++){
        ans = ans * x;
    }
    std::cout << x << "^" << n << "=" << ans << std::endl;
}
    else{
        std::cout << "Please enter n >= 0" << std::endl;
    }
}
