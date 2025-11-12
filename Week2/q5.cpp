#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if (islower(ch)) cout << "Uppercase: " << char(toupper(ch));
    else cout << "Lowercase: " << char(tolower(ch));
}
