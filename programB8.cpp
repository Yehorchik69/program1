#include <iostream>

int main() {
    char s[1000];
    std::cout << "Enter the string: ";
    std::cin >> s;

    int n = 0;
    while (s[n] != '\0') {
        n++;
    }

    if (n < 3) {
        std::cout << "NO";
        return 0;
    }

    if ((n - 1) % 2 != 0) {
        std::cout << "NO";
        return 0;
    }

    int k = (n - 1) / 2;

    for (int i = 0; i < k; i++) {
        if (s[i] != s[n - 1 - i]) {
            std::cout << "NO";
            return 0;
        }
    }

    std::cout << "YES";
    return 0;
}
