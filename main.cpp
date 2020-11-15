#include <iostream>
using namespace std;

void Mostrar(int numeros[]){
  for(int i = 0; i < 5 ; i++){
    cout << numeros[i] << " ";
  }
}


int main() {
  
  int numeros[] = {5,3,4,2,1};
  int aux, min;
  Mostrar(numeros);
  cout << "\n";
  for(int i = 0; i < 5; i++){
    min = i;
    for(int j = i+1; j < 5; j++){
      if(numeros[j] < numeros[min]){
        min = j;
      }
    }
    aux = numeros[i];
    numeros[i] = numeros[min];
    numeros[min] = aux;
    cout << "Pasada " << i << " : " ;
    Mostrar(numeros);
    cout << "\n";
  }

  cout << "Orden Ascendente: ";
  for(int i = 0; i < 5 ; i++){
    cout << numeros[i] << " ";
  }

  cout << "\nOrden Descendente: ";
  for(int i = 4; i >= 0 ; i--){
    cout << numeros[i] << " ";
  }

}