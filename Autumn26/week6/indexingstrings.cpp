#include <iostream>

int main(){
    std::string s;
    std::cin >> s;

    // std::string variables can be indexed character by character
    for(int i = 0; i < s.size(); i++){
        std::cout << s[i] << std::endl;
    }

}