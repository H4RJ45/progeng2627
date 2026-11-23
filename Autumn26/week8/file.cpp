#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int main(int argc, char* argv[]){
    std::ifstream infile;
    infile.open(argv[1]);
    if (infile.is_open()){
        std::string word;
        while (infile >> word){
            std::cout << word << std::endl;
        }
    }
    infile.close();
    
}