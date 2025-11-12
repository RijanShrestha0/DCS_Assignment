#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a,b;
    cout << "Enter two strings: ";
    cin >> a >> b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b) cout << "Strings are anagrams." << endl;
    else cout << "Not anagrams." << endl;
}
