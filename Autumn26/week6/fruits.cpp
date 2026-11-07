#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

bool search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i=0; i<vin.size(); i++){
        if (vin[i] == s){
            return true;
        }
    }
    return false;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0; i<vin1.size(); i++){
        if (!search_vector(vin1[i], vout)){
            vout.push_back(vin1[i]);}

    }
    for (int i=0; i<vin2.size(); i++){
        if (!search_vector(vin2[i], vout)){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
        for (int i=0; i<vin1.size(); i++){
            if (search_vector(vin1[i], vin2)){
            vout.push_back(vin1[i]);
            }
    }
}

int main(){
    std::string warehouse_file1, warehouse_file2, union_file, intersection_file;
    std::cout << "Warehouse 1 file: ";
    std::cin >> warehouse_file1;
    std::cout << "Warehouse 2 file: ";
    std::cin >> warehouse_file2;
    std::cout << "union file: ";
    std::cin >> union_file;
    std::cout << "intersection file: ";
    std::cin >> intersection_file;

    std::ifstream w1, w2;
    std::ofstream in, un;

    w1.open(warehouse_file1);
    w2.open(warehouse_file1);
    in.open(intersection_file);
    un.open(union_file);

    if (w1.is_open() && w2.is_open() && in.is_open() && un.is_open()){
        std::string fruit;
        std::vector<std::string> v1,v2, vint, vuni;
        while (w1 >> fruit){
            v1.push_back(fruit);
        }
        while (w2>> fruit){
            v2.push_back(fruit);
        }
        w1.close();
        w2.close();
        intersection_vector(v1, v2, vint);
        union_vector(v1, v2, vuni);
        for (int i=0; i<vint.size(); i++){
            in << vint[i] << std::endl;
        }
        in.close();

        for (int i=0; i<vuni.size(); i++){
            un << vuni[i] << std::endl;
        }
        un.close();

    }
    else{
        std::cout << "ERROR" << std::endl;
        return EXIT_FAILURE;
    }


}