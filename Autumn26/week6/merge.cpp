#include <iostream>
#include <vector>

void merge_vectors_int(std::vector<int> v1, std::vector<int> v2, std::vector<int>& vout){
    while (v1.size() > 0 && v2.size() > 0){
        if (v1[0] < v2[0]){
            vout.push_back(v1[0]);
            v1.erase(v1.begin());
        }
        else if (v2[0] < v1[0]){
            vout.push_back(v2[0]);
            v2.erase(v2.begin());
        }
        else if (v1[0] == v2[0]){
            vout.push_back(v1[0]);
            v1.erase(v1.begin());
            vout.push_back(v2[0]);
            v2.erase(v2.begin());
        }

    }
                for (int i=0; i<v1.size(); i++){
                vout.push_back(v1[i]);
            }
            for (int i=0; i<v2.size(); i++){
                vout.push_back(v2[i]);
            }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}