#include <iostream>
#include <fstream>
#include <cfloat>
using namespace std;

int main() {
    double n;
    double max = DBL_MIN;
    ifstream archivo;

    archivo.open("datos.txt");
    if (!archivo.is_open())
        cout << "ERROR DE APERTURA DEL ARCHIVO DE ENTRADA " << endl;
    else {
        archivo >> n;
        while (n != 0.0) {
            if (n > max)
                max = n;
            archivo >> n;
        }
        cout << "El mayor es: " << max << endl;
        archivo.close();
    }
    return 0;
}