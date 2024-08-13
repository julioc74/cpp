#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a, b, c;

    cout << "Ingrese valores: a, b, c ";
    cout << "Ingrese valor de a:  ";
    cin >> a;

    cout << "Ingrese valor de b:  ";
    cin >> b;

    cout << "Ingrese valor de c:  ";
    cin >> c;

    double d = (b*b) - (4*a*c);

    if(d > 0){
        double x1, x2;
        x1 = (-b + sqrt(d))/ (2*a);
        x2 = (-b - sqrt(d))/ (2*a);
        cout << "Las raices son reales y son ";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if(d == 0){
        double x = -b/(2*a);
        cout << "La ecuacion de segundo grado tiene una sola raiz de multiplicidad 2" << endl;
        cout << "x1 = x2 = " << x << endl;
    }

    else {

        double real = -b /(2*a);
        double imaginario = sqrt(-d)/(2*a);
        cout << "Las raices son complejos conjugados" << endl;
        cout << "x1 = " << real << " + " << imaginario << "*i" << endl;
        cout << "x2 = " << real << " - " << imaginario << "*i" << endl;
    }

    return 0;
}
