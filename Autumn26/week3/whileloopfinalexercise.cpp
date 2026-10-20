#include <iostream>

int main(){
    double expense, total = 0;

    std::cout << "Enter an expense (-1 to stop): ";
    std::cin >> expense;

    while( expense != -1){
        total = total + expense;

        std::cout << "Enter an expense (-1 to stop): ";
        std::cin >> expense;
    }

    std::cout << "Total expenses: " << total << std::endl;
}

/*
idea from chatgpt, proposed question from gpt: Enter expenses one at a time.
Enter -1 when finished. Print the total.
*/