#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

int occurrences(std::vector<std::string> text , std::string word){
    int occ = 0;
    for (int i=0; i<text.size(); i++){
        if (text[i] == word){
            occ += 1; 
        }
    }
    return occ;
}

int main(){
    std::ifstream t, w;
    std::vector<std::string> text, words;
    std::string word;
    t.open("text.txt");
    w.open("words.txt");
    if (t.is_open() && w.is_open()){
    while(t >> word) {
        text.push_back(word);
    }
    while(w >> word) {
        words.push_back(word);
    }
    for (int i=0; i<words.size(); i++){
        std::cout << words[i] << ": " << occurrences(text, words[i]) << std::endl;
    }
    t.close();
    w.close();

}
else{
    std::cout << "ERROR" << std::endl;
    return EXIT_FAILURE;
}
}