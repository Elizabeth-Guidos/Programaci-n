#include <iostream>
#include <conio.h>
using namespace std;

int main() {
string nombre[2]; //vector que almacena los nombres
double nota[3]; //vector para almacenar notas
double Nsuma=0,promedio=0; //variables para almacenar la suma de
//calcular promedio

for(int i=0;i<2;i++){ //ciclo que almacena los nombres
cout<<"ingrese el nombre del estudiante no."<<i+1<<": ";
cin>>nombre[i];
Nsuma=0; //reseteando la variable

for(int j=0;j<3;j++){ //ciclo que almacena las notas
cout<<"ingrese la nota no."<<j+1<<": "; //50,40,20
cin>>nota[j];

//sumando todas las posiciones del vector nota
Nsuma=Nsuma+nota[j]; //50+40+20=110
}

//calculo del promedio
promedio=Nsuma/3;
cout<<"\nEl promedio es: "<<promedio<<endl;

if(promedio<60){
cout<<"reprobado"<<endl;
}else{
cout<<"aprobado"<<endl;
}
}
cout<<"\nResultados:\n";
cout<<"nombre\tNota1\tNota2\tNota3";
for(int k=0;k<2;k++){
cout<<"\n"<<nombre[k]<<"\t"<<nota[0]<<"\t"<<nota[1]<<"\t"<<nota[2]<<"\n";
}
}