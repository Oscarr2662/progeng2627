#include <iostream>

int main(){
    int n;
    bool found_factor = false;
    
    std::cout << "Please enter an integer greater than 1." << std::endl;
    std::cin >> n;
    
    if(n <= 1){
        std::cout << "The input is not valid. Please enter an integer greater than 1" << std::endl;
    }else{
        for (int cf = 2; cf <= n / cf && !found_factor; cf++){
            if (n % cf == 0){
                found_factor = true;
            }
        }
        

        if(found_factor){
            std::cout << "The number is not prime" << std::endl;
        }
        else{
            std::cout << "The number is prime" << std::endl;
        }
    }
}

/*
Revision notes:
- A prime number is greater than 1 and has no factors except 1 and itself.
- cf is a candidate factor, starting at 2.
- n % cf == 0 means cf divides n exactly, so n is not prime.
- We only check up to the square root of n: any larger factor
  would have a smaller partner that we have already checked.
- cf <= n / cf includes the square root without needing sqrt().
- && !found_factor stops the loop once a factor is found.
- These improvements give the same answer with fewer checks.
*/
/*
First, once you find a factor, you already know the number is not prime. For 21, the program tries cf = 2 (not a factor), then cf = 3. Since 21 % 3 == 0, it sets found_factor = true. The !found_factor part of the loop condition is then false, so it stops.
Second, if you haven’t found a factor, you only need to search through \(\sqrt n\). 
Factors come in pairs: \(21 = 3 \times 7\). Although 7 is larger than \(\sqrt{21}\) (about 4.58), its partner 3 is smaller. 
If both factors were larger than \(\sqrt n\), multiplying them would give a number larger than n.
 So a non-prime number must have at least one factor at or below \(\sqrt n\).
*/