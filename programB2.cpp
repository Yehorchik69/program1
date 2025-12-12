#include <iostream>

int main() {
    char text[1000]; 


    std::cout << "Enter the text: ";
    std::cin.getline(text, 1000); 

    int l = 0;
    while (text[l] != '\0') {
        l++;
    }

    std::cout << "Lenght of the string: " << l << " symbols\n";

    return 0;
}