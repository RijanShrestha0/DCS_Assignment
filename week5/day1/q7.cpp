#include <iostream>

int fibonacciTail(int n, int a = 0, int b = 1) {
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    } else {
        return fibonacciTail(n - 1, b, a + b);
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The " << n << "th Fibonacci number (tail recursive) is " << fibonacciTail(n) << std::endl;
    return 0;
}
