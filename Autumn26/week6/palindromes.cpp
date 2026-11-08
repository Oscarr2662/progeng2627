#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    // complete this function

    std::string clean;

    // Copy all characters except spaces.
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            clean.push_back(s[i]);
        }
    }

    // Compare characters from opposite ends.
    int length = static_cast<int>(clean.size());

    for (int i = 0; i < length / 2; i++) {
        if (clean[i] != clean[length - 1 - i]) {
            return false;
        }
    }

    return true;
}


int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    //This declares a vector called test_cases, 
    //where each element is a pair containing a string and a Boolean.
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}