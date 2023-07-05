#include <iostream>
#include <string>

using namespace std;

int main() {
    
	string nombre;
    int seleccion;
    int cursos=0;
    int notas[100];
    float promedio = 0.0;

    do{
        cout<<"MENU"<<endl;
        cout<<"Ingrese el nombre y apellido"<<endl;
        cout<<"Las notas de los cursos asignados por el docente"<<endl;
        cout<<"Visualizacion de las notas"<<endl;
        cout<<"Promedio general de las notas"<<endl;
        cout<<"Salir"<<endl;
        cin>>seleccion;

        switch (seleccion){
            case 1:
                cout << "Ingrese el nombre y apellido: ";
                cin.ignore();
                getline(cin, nombre);
                break;

            case 2:
                cout << "Ingrese cuantos cursos quiere : ";
                cin >>cursos;

                for (int i=0;i<cursos;i++) {
                    cout<<"Curso"<<i+1<<": ";
                    cin>>notas[i];
                }
                break;

            case 3:
                cout << "Visualiza las notas:" << endl;
                
                for (int i = 0; i < cursos; i++) {
                    cout << "Curso " << i + 1 << ": " << notas[i] << endl;
                }
                break;

            case 4:
                if (nombre.empty()) {
                    cout << "No has ingresado el nombre del estudiante." << endl;
                } else if (cursos == 0) {
                    cout << "No has ingresado las notas de los cursos." << endl;
                } else {
                    cout << "Visualiza el promedio general de las notas." << endl;
                    promedio = 0.0;

                    for (int i = 0; i < cursos; i++) {
                        promedio += notas[i];
                    }

                    promedio /= cursos;
                    cout << "Alumno: " << nombre << endl;
                    cout << "Promedio: " << fixed << promedio << endl;
                }
                break;

            default:
                cout << "Adios" << endl;
                break;
        }
    } while (seleccion != 5);

    return 0;
}