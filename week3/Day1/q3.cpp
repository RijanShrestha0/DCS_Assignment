#include <iostream>

int main() {
    int n, reversed_n = 0, remainder;

    std::cout << "Enter an integer to reverse: ";
    std::cin >> n;

    int original_n = n;

    if (n < 0) {
        std::cout << "Reversing negative numbers is not handled in this example." << std::endl;
        return 1;
    }

    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }

    std::cout << "The reverse of " << original_n << " is: " << reversed_n << std::endl;

    return 0;
}
