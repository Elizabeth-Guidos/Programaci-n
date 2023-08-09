//librerías
#include <iostream>
#include<conio.h>

using namespace std;

int main(){
int a;
int numeros[a];

cout<<"ingrese la longitud de su vector"<<endl;
cin>>a;

//para registrar los elementos en el vector
cout<<"digite un numero: "<<endl;
for(int i=0;i<a;i++){
cin>>numeros[i];
}

//para imprimir los valores
cout<<"vector original: "<<endl;
for(int j=0;j<a;j++){
cout<<numeros[j]<<" "<<endl;
}

//orden inverso
cout<<"el vector en orden inverso es: "<<endl;
for(int k=a-1;k>=0;k--){
cout<<numeros[k]<<" "<<endl;
}

getch();


return 0;
}
tiene menú contextual