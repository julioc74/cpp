// ley de cosenos

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){

    int a, b;
    float c, rad, sexag;

    cout << "ingrese el valor del lado a " << endl;
    cin >> a;
    cout << "ingrese el valor del lado b " << endl;
    cin >> b;
    cout << "ingrese el valor del ángulo en grados sexagesimales " << endl;
    cin >> sexag;

    rad = sexag * M_PI/ 180;
    c = sqrt(pow(a, 2) + pow(b, 2) - 2*a*b*cos(rad));

    cout << "el valor del lado c es " << c << endl;

    return 0;




}
