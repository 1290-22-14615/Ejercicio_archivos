#include <iostream>
using namespace std;

struct Estudiante {
    int id;
    string nombre;
    string apellido;
    float nota1, nota2, nota3, nota4;
};

void ingresarDatos(Estudiante* est, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del estudiante " << i+1 << ":" << endl;
        cout << "ID: ";
        cin >> (est+i)->id;
        cout << "Nombre: ";
        cin >> (est+i)->nombre;
        cout << "Apellido: ";
        cin >> (est+i)->apellido;
        cout << "Nota 1: ";
        cin >> (est+i)->nota1;
        cout << "Nota 2: ";
        cin >> (est+i)->nota2;
        cout << "Nota 3: ";
        cin >> (est+i)->nota3;
        cout << "Nota 4: ";
        cin >> (est+i)->nota4;
    }
}

void calcularPromedio(Estudiante* est, int n) {
    for (int i = 0; i < n; i++) {
        float promedio = ((est+i)->nota1 + (est+i)->nota2 + (est+i)->nota3 + (est+i)->nota4) / 4;
        cout << "El estudiante " << (est+i)->nombre << " " << (est+i)->apellido << " tiene un promedio de " << promedio;
        if (promedio >= 60) {
            cout << "Aprobado." << endl;
        } else {
            cout << "Reprobado." << endl;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    Estudiante* estudiantes = new Estudiante[n];
    ingresarDatos(estudiantes, n);
    calcularPromedio(estudiantes, n);
    delete[] estudiantes;
    return 0;
}

