#include <iostream>

int main() {
    int x, y;

    std::cout << "Enter width: ";
    std::cin >> x;

    std::cout << "Enter height: ";
    std::cin >> y;

    for (int i = 0; i < y; i++) {        
        for (int j = 0; j < x; j++) {    
            std::cout << "* ";
        }
        std::cout << "\n";                   
    }

    return 0;
}