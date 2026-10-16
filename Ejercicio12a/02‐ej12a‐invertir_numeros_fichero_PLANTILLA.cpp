#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int valor;
    ifstream archivoInput;
    ofstream archivoOutput;

    cout << "Inicio" << endl;
    archivoInput.open("input.txt"); // apertura del archivo de entrada
    if (!archivoInput.is_open())
        cout << "ERROR DE APERTURA DE ARCHIVO DE ENTRADA" << endl;
    else {
        archivoOutput.open("output.txt"); // apertura del archivo de salida
        if (!archivoOutput.is_open())
            cout << "ERROR DE APERTURA DE ARCHIVO DE SALIDA" << endl;
        else { // abiertos ambos archivos

            archivoInput >> valor;
            while (!archivoInput.eof()) {
                if (valor > 0) {
                    while (valor != 0) {
                        archivoOutput << valor % 10;
                        valor = valor / 10;
                    }
                    archivoOutput << endl;
                }
                archivoInput >> valor;
            }

            archivoOutput.close(); // cierre del archivo de salida
        }
        archivoInput.close(); // cierre del archivo de entrada
        cout << "Terminado";
    }
    return 0;
}

