#include <iostream>
#include <string>

int main() {
    std::string a = "abc01230abc01230abc";
    int k = 4;
    std::string mang[k - 1][a.length() - 1];
    int i = 0;
    int j = 0;

    // Kh?i t?o m?ng
    while (j <= a.length() - 1) {
        mang[i][j] = a[j];
        if (i < k - 1) {
            i++;
            j++;
        } else {
            i = 0; // Thi?t l?p l?i i d? quay l?i hàng d?u tiên
            j++;
        }
    }

    // In ra các ph?n t? c?a m?ng
    for (int row = 0; row < k - 1; ++row) {
        for (int col = 0; col < a.length() - 1; ++col) {
            std::cout << mang[row][col] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

