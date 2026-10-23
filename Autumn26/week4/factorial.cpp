#include <iostream>

int factorial(int n){
    int sum = 1;
    for (int i=1; i<=n; i++){
        sum = sum*i;
    }
    return sum;
}
int main(){
    std::cout << factorial(5) << std::endl;
}