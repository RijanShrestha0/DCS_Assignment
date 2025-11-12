#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s, res="";
    cout << "Enter a string: ";
    getline(cin, s);
    for(char ch:s)
        if(isalpha(ch)) res+=ch;
    cout << res << endl;
}
