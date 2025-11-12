#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (islower(ch)) cout << "Uppercase: " << char(toupper(ch)) << endl;
    else cout << "Lowercase: " << char(tolower(ch)) << endl;
}
