#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly
    
    if(year % 4 == 0){
        if ((year % 100) == 0){
            if(year % 400 == 0){
            ly = true;
        }
            else{
            ly =false;
        }
        //use boolean operators in the future
    }
        else{
        ly = true;
        }
        }
    else{
        ly = false;
        }
    
    return ly;
   
    }
    //The names do not need to match. When the function finishes, 
    //its local variable ly goes away, 
    //but the returned true has been passed to the calling line.

int main(){

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
    
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
}