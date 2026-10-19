#include <iostream>
#include <string>

int main(){
    int lower=0, higher=100, mid;
    std::string equal, highlow;
    mid = (higher+lower)/2;
    bool found = false;
    std::cout << "Make a guess between 0 and 100" << std::endl;
    while (found != true){
        std::cout << "Is it " << mid << " (Y/N) ";
        std::cin >> equal;
        if (equal == "Y"){
            found = true;
        }
        else {
            std::cout << "Higher or lower than " << mid << " (H/L) ";
            std::cin >> highlow;
            if (highlow == "H"){
                lower = mid;
                mid = (higher + lower)/2;
            }
            else if (highlow == "L"){
                higher = mid;
                mid = (lower + higher)/2;
            }
        }


    }




}