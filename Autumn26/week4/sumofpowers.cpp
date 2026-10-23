#include <iostream>

double mypow(double x, double n){
    double sum = 1;
    if (x < 0){ x = 1/x;}
    for(int i=1; i<=n; i++){
        sum = sum * x;
    }
    return sum;
}

double sumofpow(double x, double n){
    double sum = 0;
    for (int i=1; i<=n; i++){
        sum += mypow(x, i);
    }
    return sum;
}

int main(){
    int x, n;
    std::cout << "X: ";
    std::cin >> x;
    std::cout << "n: ";
    std::cin >> n;
    std::cout << sumofpow(x,n) << std::endl;
}