#include <iostream>
#include <string>

void swap(std::string& s1, std::string& s2){
    std::string tmp;
    tmp = s2;
    s2 = s1;
    s1 = tmp;

}

int main(){
    std::string string1;
    std::string string2;
    std::cout << "String 1: ";
    std::cin >> string1;
    std::cout << "String 2: ";
    std::cin >> string2;

    swap(string1, string2);
    std::cout << string1 << " " << string2 << std::endl;
}