#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int v=0, c=0;
    for(char ch : s) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    cout << "Vowels: " << v << "\nConsonants: " << c << endl;
}
