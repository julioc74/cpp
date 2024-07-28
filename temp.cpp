#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float celsius, fahrenheit, kelvin;
	cout << setw(15) << "Celsius" << setw(18) << "Fahrenheit" << setw(15) << "Kelvin" << endl;
	for (celsius=0; celsius<=50; celsius+=5){
		fahrenheit = (9/5) * celsius + 32;
		kelvin = celsius + 273;
	cout << setw(15) << celsius << setw(18) << fahrenheit << setw(15) << kelvin << endl;
	}

	return 0;
}

