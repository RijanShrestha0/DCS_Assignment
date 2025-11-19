#include <iostream>
#include <iomanip>
int main() {
    std::cout << "Multiplication Table (1-10):" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            std::cout << std::setw(4) << (i * j);
        }
        std::cout << std::endl;
    }

    return 0;
}
