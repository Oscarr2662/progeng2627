/*
Enter electricity use in kWh for each seven days. Print the weekly total and daily average.
*/

#include <iostream>

int main(){
    double usage, total = 0;

    for (int day = 1; day <= 7; day++)
    {
        std::cout << "Enter kWh use on day " << day <<": ";
        std::cin >> usage;
        total = usage + total;
}

    std::cout << "Weekly total: " << total << "kWh" << std::endl;
    std::cout << "Daily average: " << total / 7 << "kWh" << std::endl;

}