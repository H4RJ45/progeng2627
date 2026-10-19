#include <iostream>

int main(){
    int n, counter=0;
    std::cout << "n: ";
    std::cin >> n;
    int max = n;
    while(n != 1){
        if (n%2==0){
            n = n/2;
        }
        else if (n%2==1){
            n = 3*n + 1;
        }
        if (n > max){
            max = n;
        }
        counter += 1;
        std::cout << n << "\t";
    }
    std::cout<<std::endl;
    std::cout << "Max is " << max << " and number of passes were " << counter << std::endl;
}