#include <iostream>

int main(){
    int x,n, ans=1;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "n: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        ans *= x;
    }
    std::cout << x << "^" << n << " = " << ans << std::endl;
}