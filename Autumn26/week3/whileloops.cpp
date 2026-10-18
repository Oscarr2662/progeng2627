#include <iostream>

int main(){
    int n=4, counter = 0;
// set n=4, we set counter =0,and enter the loop for the first time
    while(counter < n){
        // counter is less than 4, so it will enter the loop and counter will now become  0+1 =1,and repeats
        std::cout << counter << std::endl;
        counter = counter + 1;
        // it will print 0, 1 ,2, 3
    }
}