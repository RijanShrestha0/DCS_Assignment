#include <iostream>
#include <string>
#include <algorithm> // For std::swap

void reverseStringRecursive(std::string& str, int start, int end) {
    if (start >= end) {
        return;
    }
    std::swap(str[start], str[end]);
    reverseStringRecursive(str, start + 1, end - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    reverseStringRecursive(str, 0, str.length() - 1);
    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}
