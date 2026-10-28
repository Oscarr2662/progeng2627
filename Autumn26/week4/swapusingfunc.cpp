// wrong version!
#include <iostream>

// type void means we are not returning anything

// this is the only different line:
void myswap(int& n1, int& n2){
    //can be (int& a, int& b)
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);
    
    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)


    // here a becomes another name for n1 ( can switch to a and b in func)
    // while b becomes another name for n2
    // it's just about the position/order in the parentheses:
    // n1 is passed to the first parameter (a)
    // n2 is passed to the second parameter (b)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}

