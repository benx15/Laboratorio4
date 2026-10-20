#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Introduce un numero: ";
	cin >> n;

	while (n >=0) {
		if (n > 0) {
			int suma = 0;
			int impar = 1;
			int cont = 0;

			while (cont < n) {
				suma = suma + impar;
				impar = impar + 2;
				cont++;
			}

			cout << "El cuadrado de " << n << " es " << suma<< endl;
		}
		else if (n==0) {
			cout << "Introduce un numero distinto a 0: ";
			
		}

		cout << "Introduce un numero: ";
		cin >> n;
	
	}


	return 0;	
}