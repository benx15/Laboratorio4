#include <iostream>
using namespace std;

int main()
{
    char c;
    int digitos = 0;
    int mayusculas = 0;
    int minusculas = 0;
    int blanco = 0;

    cout << "Introduce caracteres en una sola linea" << endl;
    cin.get(c);

   
    while (c != '\n') {
        if (isdigit(c))
            digitos++;
        else if (isupper(c))
            mayusculas++;
        else if (islower(c))
            minusculas++;
        else if (isblank(c))
            blanco++;
        cin.get(c);
    }

    cout << digitos << " digitos." << endl;
    cout << mayusculas << " mayusculas." << endl;
    cout << minusculas << " minusculas." << endl;
    cout << blanco << " blancos." << endl;

    return 0;
}