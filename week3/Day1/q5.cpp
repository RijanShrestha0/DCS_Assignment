#include <iostream>

int main() {
    int n;
    long long factorial = 1; 

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    } else if (n == 0) {
        factorial = 1;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
    }

    std::cout << "Factorial of " << n << " = " << factorial << std::endl;

    return 0;
}
