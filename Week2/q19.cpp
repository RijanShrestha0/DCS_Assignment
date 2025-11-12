#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s, r="";
    cin >> s;
    for(char ch:s)
        if(!strchr("aeiouAEIOU",ch)) r+=ch;
    cout << r;
}
