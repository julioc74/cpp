// programa que halla el mcd(máximo común divisor) de dos enteros usando funciones y recursividad

#include <iostream>

using namespace std;

int mcd(int a, int b){

    if (b == 0){

        return a;
        }

    else{

        return mcd(b, a%b);
    }
}
int main(){

    int a, b;
    cout << "ingresa los números para hallar su mcd " << endl;
    cin >> a;
    cin >> b;
    cout << "el mcd de " << a << " y " << b << " es " << mcd(a,b) << endl;
    return 0;
}


