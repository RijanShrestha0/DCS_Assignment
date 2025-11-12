#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s, rev;
    cin >> s;
    rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev) cout << "The string is a palindrome.";
    else cout << "The string is not a palindrome.";
}
