#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
   int n;

   cout << "Ingresa un numero: "; cin >> n;
   cout << "Tabla de multiplicar de " << n <<endl;
      for (int i=1;i<=10; ++i){
         cout << n << "X" << i << "=" <<n*i <<endl;
   }

   return 0;
}