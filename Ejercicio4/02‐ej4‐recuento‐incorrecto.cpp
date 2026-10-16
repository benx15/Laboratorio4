// Tema 2 hoja 2. Ejercicio 4.

#include <iostream>
using namespace std;

int main()
{
    char c;
    int digitos = 0;
    int mayusculas = 0;
    int minusculas = 0;

    cout << "Introduce caracteres, cada uno en una linea (* para acabar)..." << endl;
    cin >> c;

    //Bucle hasta que el caracter sea *
    while (c != '*') {
        if (isdigit(c))
            digitos++;
        else if (isupper(c))
            mayusculas++;
        else if (islower(c))
            minusculas++;
        cout << "Introduce caracteres, cada uno en una linea (* para acabar)..." << endl;
        cin >> c;
    }
       // solo habia que volver a pedir los datos

    // visualización del recuento por pantalla
    cout << digitos << " digitos." << endl;
    cout << mayusculas << " mayusculas." << endl;
    cout << minusculas << " minusculas." << endl;

    return 0;
}
