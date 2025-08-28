// Materia: Programación I, Paralelo 4
// Autor: Andoni Adriel Zegarra Castro
// Carnet: 11107213 L.P.
// Carrera del estudiante: Ingeniería mecatronica
// Fecha creación: 24/08/2025
// Número de ejercicio: 4
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double radio, volumen;

    cout << "Ingresar valor para el radio: ";
    cin >> radio;

    volumen = (4.0 / 3.0) * PI * pow(radio, 3);

    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}
