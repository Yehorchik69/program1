#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter number of rows and cols: ";
    std::cin >> n >> m;

    int a[100][100];
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int num = 1;

    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++)
            a[top][j] = num++;
        top++;

        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        for (int j = right; j >= left; j--)
            a[bottom][j] = num++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            a[i][left] = num++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}
