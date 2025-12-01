#include <iostream>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumDigits(n / 10);
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Sum of digits of " << n << " is " << sumDigits(n) << std::endl;
    return 0;
}
