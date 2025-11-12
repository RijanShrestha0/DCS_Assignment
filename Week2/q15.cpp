#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s, res="";
    getline(cin, s);
    for(char ch:s)
        if(isalpha(ch)) res+=ch;
    cout << res;
}
