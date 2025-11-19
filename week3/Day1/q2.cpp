#include <iostream>

int main() {
    int num;
    int i = 1;

    std::cout << "Enter a number to print its multiplication table: ";
    std::cin >> num;

    std::cout << "Multiplication Table for " << num << ":" << std::endl;

    do {
        std::cout << num << " * " << i << " = " << (num * i) << std::endl;
        i++;
    } while (i <= 10);

    return 0;
}
