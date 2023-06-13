#include <iostream>

using namespace std;
int main() {
    int matriz[4][4];
for (int i=0; i<4; i++) {
     for (int x=0; x<4; x++) {
      cout << "Ingrese el elemento:["<< i <<"]["<< x <<"]: ";
      cin >> matriz[i][x];
  }
}

for (int i= 0; i< 4; i++) {
     int suma = 0;
     for (int x= 0; x< 4; x++) {
      suma += matriz[i][x];
}
   cout << "suma" <<i+ 1<< " es : "<<suma<<endl;
}

return 0;
}