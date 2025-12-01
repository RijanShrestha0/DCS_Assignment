#include <iostream>

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        std::cout << n << " ";
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    printNumbers(n);
    std::cout << std::endl;
    return 0;
}
