#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main() {
    string s, r="";
    cout << "Enter a string: ";
    cin >> s;
    for(char ch:s)
        if(!strchr("aeiouAEIOU",ch)) r+=ch;
    cout << r << endl;
}
