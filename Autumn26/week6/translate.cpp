#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

void translate(std::vector<std::string>vin, std::vector<std::string>key, std::vector<std::string>value, std::vector<std::string>&vout){
    std::string word;
    for (int i=0; i<vin.size(); i++){
        word = vin[i];
        for (int j =0; j<key.size(); j++){
            if (word == key[j]){
                word = value[j];
            }
        }
        vout.push_back(word);
    }
}

int main(){
    std::ifstream ad, dict;
    std::ofstream output;
    std::vector<std::string> adtxt, key, value, translatetxt;
    int counter = 0;
    std::string word;
    ad.open("ad.txt");
    dict.open("translate.txt");
    output.open("translated.txt");
    if (ad.is_open()&&dict.is_open() && output.is_open()){
        while (ad >> word){
            adtxt.push_back(word);
        }
        while (dict >> word){
            if (counter % 2==0){
                key.push_back(word);
            }
            else if (counter % 2 == 1){
                value.push_back(word);
            }
            counter += 1;
        }
        translate(adtxt, key, value, translatetxt);
        for (int i=0; i<translatetxt.size(); i++){
            output << translatetxt[i] << " ";
        }
        ad.close();
        dict.close();
        output.close();

}
    else{
        std::cout << "ERROR" << std::endl;
        return EXIT_FAILURE;
}
}