#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream output;
    output.open("output.txt");
    if (!output.is_open()){
        std::cout << "ERROR";
        return EXIT_FAILURE;
    }
    else{
        output << "Hello World :)" << std::endl;
        output.close();
    }
}
