#include <iostream>

double mypow(double base , int exp){
    double result = 1.0;

    if(exp >= 0){
        for (int i = 0; i < exp; i++)
        {
            result = result * base;
        }
        }else{
            for (int i = 0; i > exp; i--){
            result = result / base;
        }
        }
        return result;

    }


    double sum_of_powers(double x, int n){
        double sum = 0.0;

        for (int i = 1; i <= n ; i++){
            sum = sum + mypow( x , i);
        }
        return sum;
    }

    int main (){
        double x;
        int n;

        std::cout << "Please enter x and n: ";
        std::cin >> x >> n;

        if (n < 0){
            std::cout << "Please enter a non-neagtive n. " << std::endl;
        }else{
            std::cout << "The sum of power is " << sum_of_powers(x, n) <<std::endl;
        }
    }