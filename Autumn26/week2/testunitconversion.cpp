#include <iostream>
#include <string>

int main(){

    double temperature_in, temperature_out;
    std::string unit_in, unit_out;

    const double F_to_C = 2.12;

    std::cin >> temperature_in >> unit_in;

    if(unit_in == "F"){
        unit_out = "C";
        temperature_out = temperature_in / F_to_C;
        std::cout << temperature_out <<" " << unit_out << std::endl;
    }
    else if (unit_in == "C"){
        unit_out = "F";
        temperature_out = temperature_in * F_to_C;

        std::cout << temperature_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;    
    }


}