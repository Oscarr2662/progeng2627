#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int operation;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);


    operation = v[0] * ( v[1] + v[2]);
    std::cout << v.size() << std::endl;

    std::cout << "Result: " << operation << std::endl;

}


//v.size() t0 check how many cells are there