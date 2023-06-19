#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	
int numero;    
cout << "Cauntos nombres vas ingresar: " << endl;
cin >> numero;
char nombre[numero][20];
cout << "Ingrese los nombres que necesite: " << endl;	
for(int i=0; i<= numero; i++){
	cin.getline(nombre[i], 20, '\n'); 	
}
 for(int i=1; i<= numero; i++){
int distancia = strlen(nombre[i]);
	cout << nombre[i] << " Ocupa este numero de espacios: " << distancia << endl;
 }

	return 0;
}
