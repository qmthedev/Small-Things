#include <iostream>
#include <cmath>

double pythagorean_theorem(double* side_a, double* side_b){
    double size_c = std::sqrt(std::pow(*side_a, 2.0) + std::pow(*side_b, 2.0));
    return size_c;
}

int main(){
    double a;
    double b;

    double* ptr_a;
    ptr_a = &a;
    double* ptr_b;
    ptr_b = &b;

    std::cout << "Enter Side A: ";
    std::cin >> *ptr_a;

    std::cout << "Enter Side B: ";
    std::cin >> *ptr_b;

    double hypotenuse = pythagorean_theorem(ptr_b, ptr_b); 

    std::cout << "The hypotenuse of the triangle is: " << hypotenuse << std::endl;

    return 0;
}