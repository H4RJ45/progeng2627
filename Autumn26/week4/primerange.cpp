#include <iostream>

int prime(int n){
    for (int i=2; i<n; i++){
        if(n%i==0){ return 0;}
    }
    return n;
}

int main(){
    int a, b;
    std::cin >> a;
    std::cin >> b;
    for (int i=a; i <= b; i++){
        if (prime(i) != 0){
            std::cout << i << std::endl;
        }
    }
}