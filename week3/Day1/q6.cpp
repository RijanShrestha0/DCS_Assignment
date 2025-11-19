#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the half pyramid: ";
    std::cin >> rows;

    if (rows < 0) {
        std::cout << "Please enter a non-negative number of rows." << std::endl;
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
