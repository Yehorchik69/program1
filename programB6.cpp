#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            std::cout << "x = " << c << std::endl;
        } 
        else {
            std::cout << "x = " << -c / b << std::endl;
        }
        return 0;
    }

    double d = b * b - 4 * a * c;

    if (d < 0) {
        std::cout << "The equation has no roots" << std::endl;
    } 
    else if (d == 0) {
        std::cout << "x = " << -b / (2 * a) << std::endl;
    } 
    else {
        double squartd = d / 2;
        for (int i = 0; i < 20; i++) { 
            squartd = (squartd + d / squartd) / 2;
        }

        double x1 = (-b + squartd) / (2 * a);
        double x2 = (-b - squartd) / (2 * a);
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }

    return 0;
}