#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);

    std::cout << v.at(0) << std::endl;
    // this will print 10

    std::cout << v.at(1) << std::endl;
    // this will print 20

    std::cout << v.at(4) << std::endl;
    // this will throw an exception

}