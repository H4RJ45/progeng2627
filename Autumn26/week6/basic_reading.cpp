#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){

    std::fstream f;
    std::vector<std::string> v;
    f.open("input.txt");
    if (f.is_open()){
        std::string word;
        while (f>>word){
            v.push_back(word);
        }
        for (int i=v.size()-1; i>=0;i--){
        std::cout << v[i] << std::endl;}
        f.close();
    }
    else{
        std::cout << "ERROR" << std::endl; 
        return EXIT_FAILURE;
    }
}