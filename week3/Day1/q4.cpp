#include <iostream>

int main() {
    int n, count = 0;

    std::cout << "Enter an integer to count its digits: ";
    std::cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        do {
            n /= 10;
            count++;
        } while (n != 0);
    }

    std::cout << "Number of digits: " << count << std::endl;

    return 0;
}
