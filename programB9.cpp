#include <iostream>

int main() {
    double s;
    std::cout << "Enter the sum: ";
    std::cin >> s;

    if (s > 1000) {
        s = s * 0.95;
    } else if (s > 500) {
        s = s* 0.97;
    }

    std::cout << s;
    return 0;
}
