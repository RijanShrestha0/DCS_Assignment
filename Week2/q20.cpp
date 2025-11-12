#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    for(int i=0;i<s.size();) {
        char c=s[i];
        int count=0;
        while(i<s.size() && s[i]==c){ count++; i++; }
        cout << c << count;
    }
    cout << endl;
}