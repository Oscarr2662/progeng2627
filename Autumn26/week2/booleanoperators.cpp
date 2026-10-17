#include <iostream>
#include <string>

int main(){

    double temperature_in, temperature_out;
    std::string unit_in, unit_out;
    const double F_to_C = 1.937;
    std::cin >> temperature_in >> unit_in;
    bool valid_unit = true;

    if(unit_in == "F" || unit_in == "f"){
    unit_out = "C";
    temperature_out = temperature_in / F_to_C;
    }
else if(unit_in == "C" || unit_in == "c"){
    unit_out = "F";
    temperature_out = temperature_in * F_to_C;
}
else{
    valid_unit = false;
}

if(valid_unit){
    std::cout << temperature_out << " " << unit_out << std::endl;
}
else{
    std::cout << "error, unit not recognised" << std::endl;
}
}