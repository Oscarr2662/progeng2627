#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == n) {
            return i;  // first match: stop immediately
        }
    }

    return -1;  // finished searching without a match
}


int main(){
    std::vector<int> v = {4, 7, 4, 9};
    std::vector<int> empty;

    std::cout << (search_vector(4, v) == 0) << std::endl;
    std::cout << (search_vector(7, v) == 1) << std::endl;
    std::cout << (search_vector(9, v) == 3) << std::endl;
    std::cout << (search_vector(8, v) == -1) << std::endl;
    std::cout << (search_vector(4, empty) == -1) << std::endl;
}