#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, D;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    D = b*b - 4*a*c;
    if (D > 0)
        cout << "Roots are real and distinct: " << (-b+sqrt(D))/(2*a)
             << " and " << (-b-sqrt(D))/(2*a) << endl;
    else if (D == 0)
        cout << "Roots are real and equal: " << -b/(2*a) << endl;
    else
        cout << "Roots are imaginary." << endl;
}
