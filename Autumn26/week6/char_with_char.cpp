#include <iostream>
#include <string>

// changed std::string letter
// to char letter
int count_occurrences(std::string s, char letter){
    int out = 0;
    for(int i = 0; i < s.size(); i++){
        // now they are both char and can be compared
        if(s[i] == letter){
            out++;
        }
    }
    return out;
}

int main(){

    std::string s = "hello";
    // not only this changed from std::string to char
    // but also "l" changed to 'l' because char requires single quotes
    char letter = 'l';
    std::cout << "there are " << count_occurrences(s, letter) << " occurrences of " << letter << " in " << s << std::endl;

}