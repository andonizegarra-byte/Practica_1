// Materia: Programación I, Paralelo 4
// Autor: Andoni Adriel Zegarra Castro
// Carnet: 11107213 L.P.
// Carrera del estudiante: Ingeniería mecatronica
// Fecha creación: 24/08/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

int main() {
    double base, altura, area;

    cout << "Ingresa un valor para la base : ";
    cin >> base;
    cout << "Ingresa un valor para la altura: ";
    cin >> altura;

    area = (base * altura) / 2.0;

    cout << "El area del triangulo es: " << area << endl;
    return 0;
}
