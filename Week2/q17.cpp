#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s, word, longest="";
    getline(cin, s);
    stringstream ss(s);
    while(ss >> word)
        if(word.size()>longest.size()) longest=word;
    cout << "Longest word: " << longest;
}
