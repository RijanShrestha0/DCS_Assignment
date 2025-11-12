#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double angle;
    cout << "Enter angle in degrees: ";
    cin >> angle;
    
    // Convert degrees to radians
    double angleRad = angle * M_PI / 180.0;
    
    cout << "sin(" << angle << "°) = " << sin(angleRad) << endl;
    cout << "cos(" << angle << "°) = " << cos(angleRad) << endl;
    cout << "tan(" << angle << "°) = " << tan(angleRad) << endl;
}
