// Materia: Programación I, Paralelo 4
// Autor: Andoni Adriel Zegarra Castro
// Carnet: 11107213 L.P.
// Carrera del estudiante: Ingeniería mecatronica
// Fecha creación: 24/08/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa un numero entero: ";
    cin >> n;

    if (n > 0)
        cout << "El numero es POSITIVO." << endl;
    else if (n < 0)
        cout << "El numero es NEGATIVO." << endl;
    else
        cout << "El numero es CERO." << endl;

    return 0;
}
