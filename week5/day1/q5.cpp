#include <iostream>

long long power(int base, int exp, long long result = 1) {
    if (exp == 0) {
        return result;
    } else {
        return power(base, exp - 1, result * base);
    }
}

int main() {
    int base, exp;
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exp;
    std::cout << base << "^" << exp << " is " << power(base, exp) << std::endl;
    return 0;
}
