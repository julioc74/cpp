#include <iostream>

using namespace std;

int main(){

    char op;
    double num1, num2, result;

    cout << "******************CALCULADORA***************" << endl;
    cout << "ingrese num1: " << endl;
    cin >> num1;
    cout << "ingrese num2: " << endl;
    cin >> num2;
    cout << "ingrese operacion (+ - * /): " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "el resultado es: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "el resultado es: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "el resultado es: " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 == 0){
            cout << "no se puede dividir entre cero, escoja otro numero " << endl;
        }
        else{
        cout << "el resultado es: " << num1 / num2 << endl;

        }
        break;
    default:
        cout << "elija solo entre los operadores: + - * / " << endl;
        break;
    }

    cout << "***************************************************" << endl;
    return 0;
}
