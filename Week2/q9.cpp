#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s, rev;
    cout << "Enter a string: ";
    cin >> s;
    rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev) cout << "The string is a palindrome." << endl;
    else cout << "The string is not a palindrome." << endl;
}
