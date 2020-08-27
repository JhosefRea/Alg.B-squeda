#include <iostream>
#include <fstream>

using namespace std;


int main(){
   float numeros[7] = {-5.1,1,2,3,4,6,7};
   int primero = 0, ultimo = 7-1; //posición
   int medio;
   float n;
   ofstream archivo; 
    cout << "Elemento a buscar: ";
    cin >> n;

   int i = 0;
   while(numeros[primero] !=n && i <7){
       medio = primero + ((n-numeros[primero])*(ultimo-primero)) / (numeros[ultimo] - numeros[primero]);
       if(numeros[medio] < n){
           ultimo = medio + 1;
       
       }else if(numeros[medio] > n){
           ultimo = medio -1;

       }else{
           primero = medio;
       }
       i++;
        break;
    }
    archivo.open("interpolación.txt", ios::out);   
    if(!archivo.is_open()){
        cout << "ERROR";
    }else{
        archivo << "Arreglo\n";
        for(int i = 0; i < 7; i++){
            archivo << numeros[i] << "\t";
        }
        archivo << "\nElemento a buscar: " << n;
        if(numeros[primero]  == n){
            archivo << "\nELEMENTO ENCONTRADO" << endl;
        }else{
            archivo << "\nELEMENTO NO ENCONTRADO" << endl;
        }   
    } 
    
   return 0;
}    


