#include <iostream>

double mypow(double base, int exp);

int main(){
    double x, n, sum;
    std::cout << "Please enter x and n for the sum of powers." << std::endl;
    std::cin >> x >> n;

   if ((x < 0) && (n > 0)) {
    std::cout << "Please change your input for x and n." << std::endl;
} else if ((x == 0) && (n < 0)) {
    std::cout << "Please change your input for x and n." << std::endl;
} else{
    for (int i = 1; i <= n; i++)
    {
        sum = mypow(x, i) + sum ;
    }
}

    std::cout << "The sum of powers is " << sum << std::endl;
    }

double mypow(double base, int exp){
    double result = 1.0; 

    if( exp >= 0) {
    for ( int i = 0 ; i < exp ; i++)
    {
       result = result * base;
    }
}else{
        for ( int i = 0 ; i > exp ; i--)
    {
       result = result / base;
    }
}

    return result;

}