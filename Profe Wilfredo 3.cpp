#include <iostream>
#include <conio.h>

using namespace std;

int main() {
int n[10];
int aux;


cout<<"ingrese 10 edades "<<endl;
for(int x=0;x<10;x++){
cin>>n[x];
}

//metodo de burbuja
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){

if(n[j]>n[j+1]){
aux=n[j];
n[j]=n[j+1];
n[j+1]=aux;
}
}
}

cout<<" "<<endl;

for(int k=0;k<10;k++){
cout<<n[k]<<endl;
}

getch();
return 0;
}