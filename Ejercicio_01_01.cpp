// Materia: Programación I, Paralelo 4
// Autor: Andoni Adriel Zegarra Castro
// Carnet: 11107213 L.P.
// Carrera del estudiante: Ingeniería mecatronica
// Fecha creación: 24/08/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

int main() {
    string nombre, apellido, carrera;

    cout << "Hola, soy estudiante de programacion." << endl;

    cout << "Ingresa tu nombre completo : "; //pide que el usuario ingrese su nombre completo
    cin >> nombre >> apellido; 

    cout << "Ingresa tu carrera (una palabra): ";     // Pedir la carrera
    cin >> carrera;

    cout << "Mi nombre es: " << nombre << " " << apellido << endl; //muestra el nombre 
    cout << "Mi carrera es: " << carrera << endl; //muestra la carrera ingresada

    return 0;
}
