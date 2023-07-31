#include <iostream>
#include <conio.h>

using namespace std;
int main() {
    string nombre[2];
     double nota[3];
     double Nsuma=0,promedio=0;

for(int i=0;i<2;i++){
   cout<<"ingrese el nombre del estudiante no."<<i+1<<":"<<endl;
   cin>>nombre[i];
     Nsuma=0;

for(int j=0;j<3;j++){
   cout<<"ingrese el la nota no."<<j+1<<":";
   cin>>nota[j];
     Nsuma= Nsuma+nota[j];

}
  promedio=Nsuma/3;
   cout<<"Su promedio es "<<promedio<<endl;

  if(promedio<60){
   cout<<"reprobado"<<endl<<endl;
}
  else{
   cout<<"Aprobado"<<endl<<endl;
    cout<<"Nombre\tNota1\tNota2\tNota3\n";
for(int k=0;k<2;k++){
  cout<<nombre[k]<<"\t"<<nota[0]<<"\t"<<nota[1]<<"\t"<<nota[2]<<"\t";
  cout<<endl;
}
}}}


			