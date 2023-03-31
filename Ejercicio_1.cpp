#include <iostream>
using namespace std;

const int MAX = 50;

int main()
{
    
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    
    string id[MAX], nombres[MAX], apellidos[MAX];
    float nota1[MAX], nota2[MAX], nota3[MAX], nota4[MAX], promedio[MAX];
    float aprobado[MAX];

    
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese información del estudiante " << i + 1 << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Nombres: ";
        cin >> nombres[i];
        cout << "Apellidos: ";
        cin >> apellidos[i];
        cout << "Nota 1: ";
        cin >> nota1[i];
        cout << "Nota 2: ";
        cin >> nota2[i];
        cout << "Nota 3: ";
        cin >> nota3[i];
        cout << "Nota 4: ";
        cin >> nota4[i];

    
        promedio[i] = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4.0;
        aprobado[i] = promedio[i] >= 60;
    }

    
    cout << "\nInformación de estudiantes:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "ID: " << id[i] << endl;
        cout << "Nombres: " << nombres[i] << endl;
        cout << "Apellidos: " << apellidos[i] << endl;
        cout << "Nota 1: " << nota1[i] << endl;
        cout << "Nota 2: " << nota2[i] << endl;
        cout << "Nota 3: " << nota3[i] << endl;
        cout << "Nota 4: " << nota4[i] << endl;
        cout << "Promedio: " << promedio[i] << endl;
        cout << "Estado: " << (aprobado[i] ? "APROBADO" : "REPROBADO") << endl; 
        cout << endl;
    }

    return 0;
}

