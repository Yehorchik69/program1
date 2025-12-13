#include <iostream>

int main() {
    int n;
    std::cout << "Enter odd number: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "This is not odd number. Try again." << std::endl;
        return 0;
    }

    for (int i = 1; i <= n; i += 2) {         
        for (int j = 0; j < (n - i) / 2; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = n - 2; i >= 1; i -= 2) {     
        for (int j = 0; j < (n - i) / 2; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}