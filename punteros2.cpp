#include <iostream>
#include <cstdint>

/*int(pa), int(pb) hacen un cast explícito del puntero a un tipo int. En sistemas modernos (especialmente de 64 bits), los punteros tienen 64 bits,
mientras que el tipo int solo tiene 32 bits. Al hacer la conversión, podrías estar perdiendo los bits más altos de la dirección de memoria,
y por eso el compilador te advierte que pierdes precisión o información si haces el cast int(pa) e int(pb).

reinterpret_cast._ Es un operador de conversión en C++ que permite transformar un tipo de dato en otro sin cambiar su representación binaria,
es decir, sin alterar los bits que componen el dato.
Se utiliza principalmente para:
a) Convertir punteros entre tipos incompatibles.
b) Convertir punteros a enteros y viceversa.
c) Casos donde necesitas un control muy bajo sobre los datos (por eso debes usarlo con cuidado).

uintptr_t._ Es un tipo de dato entero sin signo definido en la biblioteca <cstdint>. Su función principal es permitir almacenar direcciones
de memoria (punteros) como enteros sin perder precisión, independientemente de si el sistema es de 32 o 64 bits.
a) Es lo suficientemente grande como para guardar cualquier dirección de memoria.
b) Su uso principal es cuando necesitas manipular punteros como números (por ejemplo, para imprimirlos en decimal o hacer aritmética especial).
c) Se usa junto con reinterpret_cast para convertir de puntero a entero de forma segura. */

using namespace std;

int main(){

    int a = 7, b = 3;
    int *pa, *pb;
    pa = &a;
    pb = &b;

    cout << "el valor de la variable a es: " << a << " y su direccion de memoria es " << pa << " y en decimal es " << reinterpret_cast<uintptr_t>(pa) << endl;
    cout << "el valor de la variable b es: " << b << " y su direccion de memoria es " << pb << " y en decimal es " << reinterpret_cast<uintptr_t>(pb) << endl;
    return 0;
}
