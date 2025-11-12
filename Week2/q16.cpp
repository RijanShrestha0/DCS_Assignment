#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s, word; int count=0;
    getline(cin, s);
    stringstream ss(s);
    while(ss >> word) count++;
    cout << "Number of words: " << count;
}
