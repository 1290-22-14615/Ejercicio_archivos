#include<iostream>
#include <fstream>
using namespace std;
const char *nombre_archivo = "archivo.dat";
struct Estudiante{
	int codidgo;
	char nombres [50];
	char apellidos[50];
	float nota1,nota2,nota3,nota4;
	float promedio,aprobado;	
};
void leer();
void crear();
main(){
	
	leer();
	crear();
	system("pause");
}
void leer(){
	system("cls");
	FILE* archivo = fopen(nombre_archivo,"rb");
}
void crear(){
	FILE* archivo = fopen(nombre_archivo,"a+b");
    char res;
    Estudiante estudiante;
    do{
    	fflush(stdin);
    	cout<<"ingrese Codigo:";
    	cin>>estudiante.codidgo;
    	cin.ignore();	
    	cout<<"ingrese Nombre:";
    	cin.getline(estudiante.nombres,50); 
    	cout<<"ingrese Apellidos:";
    	cin.getline(estudiante.apellidos,50);   	
    	cout<<"ingrese Nota 1:";
    	cin>>estudiante.nota1;
    	cout<<"ingrese Nota 2:";
    	cin>>estudiante.nota2;
    	cout<<"ingrese Nota 3:";
    	cin>>estudiante.nota3;
    	cout<<"ingrese Nota 4:";
    	cin>>estudiante.nota4;
    	estudiante.promedio = (estudiante.nota1 + estudiante.nota2 + estudiante.nota3 + estudiante.nota4) / 4.0;
        estudiante.aprobado = estudiante.promedio >= 60;
    
    	
    	fwrite(&estudiante,sizeof(Estudiante),1,archivo);
    	cout<<"Desea ingresar otro estudiante(s/)";
    	cin>>res;
	}while(res == 's' || res=='S');
	    cout << "ID: " << estudiante.codidgo << endl;
        cout << "Nombres: " << estudiante.nombres << endl;
        cout << "Apellidos: " << estudiante.apellidos << endl;
        cout << "Nota 1: " << estudiante.nota1 << endl;
        cout << "Nota 2: " << estudiante.nota2 << endl;
        cout << "Nota 3: " << estudiante.nota3 << endl;
        cout << "Nota 4: " << estudiante.nota4 << endl;
        cout << "Promedio: " << estudiante.promedio << endl;
        cout << endl;
	fclose(archivo);
}


