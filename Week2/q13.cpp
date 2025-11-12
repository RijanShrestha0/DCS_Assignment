#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int freq[26]={0};
    for(char ch:s)
        if(isalpha(ch)) freq[tolower(ch)-'a']++;
    for(int i=0;i<26;i++)
        if(freq[i]>0) cout << char('a'+i) << ":" << freq[i] << "  ";
    cout << endl;
}
