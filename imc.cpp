// Programa que calcula el indice de masa corporal (imc) dados el peso en kg y la estatura en m
#include <iostream>

using namespace std;

int main(){

    double peso, estatura, imc;

    cout << "Ingrese su peso en kg" << endl;
    cin >> peso;

    cout << "Ingrese su estatura en m" << endl;
    cin >> estatura;

    imc = peso / ((estatura)*(estatura));

    if (imc < 18.9){
        printf( "Su imc es: %.2f\n", imc );
        cout << "Ud tiene peso bajo" << endl;
        }

     else if (imc >= 18.9 && imc < 24.9){
        printf("Su imc es: %.2f\n", imc);
        cout << "Ud tiene peso normal" << endl;
        }

     else if (imc >= 24.9 && imc < 29.9){
        printf("Su imc es %.2f\n", imc);
        cout << "Ud tiene sobrepeso" << endl;
        }

     else if (imc >= 29.9 && imc < 34.9){
        printf("Su imc es %.2f\n", imc);
        cout << "Ud tiene obesidad leve" << endl;
        }

     else if (imc >= 34.9 && imc < 39.9){
        printf("Su imc es %.2f\n", imc);
        cout << "Ud tiene obesidad media" << endl;
        }

    else{
        printf("Su imc es %.2f\n", imc);
        cout << "Ud tiene obesidad morbida" << endl;
        }

     return 0;

}
