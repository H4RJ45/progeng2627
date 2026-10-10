#include <iostream>
#include <string>

int main(){
    std::string firstname;
    std::string surname;
    std::cout << "First name: " << std::endl;
    std::cin >> firstname;
    std::cout << "Surname: " << std::endl;
    std::cin >> surname;
    std::cout << "Your name is " << firstname << " " << surname << std::endl;
}