// Materia: Programación I, Paralelo 4
// Autor: Andoni Adriel Zegarra Castro
// Carnet: 11107213 L.P.
// Carrera del estudiante: Ingeniería mecatronica
// Fecha creación: 24/08/2025
// Número de ejercicio: 7
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Ingresa una letra: ";
    cin >> ch;

    if (isalpha(static_cast<unsigned char>(ch))) {
        ch = tolower(ch);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            cout << "Es una VOCAL." << endl;
        else
            cout << "Es una CONSONANTE." << endl;
    } else {
        cout << "Es un CARACTER ESPECIAL." << endl;
    }
    return 0;
}
