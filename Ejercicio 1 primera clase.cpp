#include <iostream>
#include <string>

   bool esPalindromo(const std::string& palabra) {
    int inicio = 0;
    int fin = palabra.length() - 1;

  while (inicio < fin) {
     if (palabra[inicio] != palabra[fin]) {
     return false;
}
  inicio++;
   fin--;
}

   return true;
}

  int main() {
  	
  std::string palabra;
   std::cout << "Ingrese una palabra: ";
   std::cin >> palabra;

  if (esPalindromo(palabra)) {
  std::cout << "La palabra es un palindromo" << std::endl;
} 
else {
std::cout << "La palabra no es un palindromo" << std::endl;
}

return 0;
}