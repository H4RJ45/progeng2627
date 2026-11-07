#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::string input_file, output_file;
    std::cout << "INPUT FILE NAME: ";
    std::cin >> input_file;
    std::cout << "OUTPUT FILE NAME: ";
    std::cin >> output_file;

    std::ifstream input;
    std::ofstream output;
    std::vector<std::string> v;
    input.open(input_file);
    output.open(output_file);
    if (input.is_open() && output.is_open()){
        std::string word;
        while (input>>word){
            v.push_back(word);
        }
        for (int i=v.size()-1; i>=0;i--){
            output << v[i] << std::endl;
        }
        input.close();
        output.close();
    }
    else{
        std::cout << "ERROR" << std::endl;
        return EXIT_FAILURE;
    }
}