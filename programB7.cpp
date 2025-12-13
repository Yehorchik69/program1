#include <iostream>
#include <cmath>

int main() {
    double a, v;
    std::cout << "Enter throwing angle: ";
    std::cin >> a;
    std:: cout << "Enter initial speed: ";
    std::cin >> v;

    double g = 9.8;
    double r = a * M_PI / 180;

    double L = v * v * sin(2 * r) / g;

    std::cout << L << std::endl;
    return 0;
}
