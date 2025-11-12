#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i=0;i<s.size();i++)
        s[i]= (i%2)? toupper(s[i]): tolower(s[i]);
    cout << s << endl;
}