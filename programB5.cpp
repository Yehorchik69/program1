#include <iostream>

int main() {
    int x, y;
    std::cout << "Enter number of rows: ";
    std::cin >> x;
    std:: cout << "Enter number of cols: ";
    std::cin >> y;

    int n = 1;

    for (int i = 0; i < x; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < y; j++) {
                std::cout << n;
                if (j < y - 1) std::cout << "  ";  
                else std::cout << std::endl;               
                n++;
            }
        }
        else {
            int temp[100];
            for (int j = 0; j < y; j++) {
                temp[j] = n;
                n++;
            }
            for (int j = y - 1; j >= 0; j--) {
                std::cout << temp[j];
                if (j > 0) std::cout << "  ";
                else std::cout << std::endl;
            }
        }
    }

    return 0;
}