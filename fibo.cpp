#include <iostream>

using namespace std;

int fibonacci(int num){

    if (num == 0 || num == 1){

        return 1;
    }

    else{
        return fibonacci(num - 2) + fibonacci(num - 1);
    }
}

int main(){

    int n;
    cout << "ingrese numero: " << endl;
    cin >> n;

    cout << "el numero de Fibonacci de " << n << " es " << fibonacci(n) << endl;

    return 0;
}
