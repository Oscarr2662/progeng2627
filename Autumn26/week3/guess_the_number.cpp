#include <iostream>
#include <string>

int main(){
    int lower, upper;

    std::cout << "Enter the lower and upper bounds: ";
    std::cin >> lower >> upper;

    bool found = false;

    while( lower <= upper && found == false){
        int guess = lower + (upper - lower)/2;
        std::string answer;

        std::cout << "Is your number " << guess << std::endl;
        std::cout << "Enter higher, lower, or correct: ";
        std::cin >> answer;

        if (answer == "higher"){
            lower = guess + 1;
        }else if( answer == "lower"){
            upper = guess - 1;
        }else if(answer == "correct"){
            found = true;
            std::cout << "Your number is" <<" " << guess << " !" << std::endl;
        }
}

    if(found == false){
    std::cout << "The answers do not fit the given range." << std::endl;
    }
}