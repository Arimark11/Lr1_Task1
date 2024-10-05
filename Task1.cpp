#include <iostream>

int main(){

    double x = 0;
    
    std::cout << " Input X:";
    std::cin >> x;

    // 23x^3 + 69x^2 +32x + 8

    double x1 = 0;
    x1 = x*x;
    double x2 = x*(23*x1 + 32);
    double x3 = 69*x1 + 8;
    double s1 = x2 + x3;
    double s2 = x3 - x2;

    std::cout << " S1 = " << s1 << std::endl << " S2 = " << s2;
    std::cout << std::endl;
    return 0;
}