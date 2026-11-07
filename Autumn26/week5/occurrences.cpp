#include <iostream>
#include <vector>


int main(){
    std::vector<int> v, ind;
    int n, s, inp, occ=0;
    std::cout << "n: ";
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cout << "Input number: ";
        std::cin >> inp;
        v.push_back(inp);}
    std::cout << "s: ";
    std::cin >> s;
    for (int j=0; j<v.size(); j++){
        if (s==v[j]){
            occ += 1;
            ind.push_back(j);
        }
    }
    std::cout << "There are " << occ << " occurrences of " << s << std::endl;
    for (int k=0; k < ind.size(); k++){
        std::cout << ind[k] << std::endl;
    }


}