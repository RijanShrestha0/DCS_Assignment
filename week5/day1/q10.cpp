#include <iostream>
#include <string>

bool isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    if (isPalindrome(str, 0, str.length() - 1)) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not a Palindrome" << std::endl;
    }
    return 0;
}
