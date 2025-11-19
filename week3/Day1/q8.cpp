#include <iostream>

int main() {
    int rows;
    int number = 1;

    std::cout << "Enter the number of rows for Floyd's Triangle: ";
    std::cin >> rows;

    if (rows < 0) {
        std::cout << "Please enter a non-negative number of rows." << std::endl;
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << number << " ";
            ++number;
        }
        std::cout << std::endl;
    }

    return 0;
}
