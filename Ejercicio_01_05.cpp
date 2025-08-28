// Materia: Programación I, Paralelo 4
// Autor: Andoni Adriel Zegarra Castro
// Carnet: 11107213 L.P.
// Carrera del estudiante: Ingeniería mecatronica
// Fecha creación: 24/08/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

int main() {
    double celsius, kelvin;

    cout << "Ingresa la temperatura en Celsius: ";
    cin >> celsius;

    kelvin = celsius + 273.15;

    cout << "Temperatura en Kelvin: " << kelvin << endl;
    return 0;
}
