#include <iostream>
#include <string.h>
using namespace std;

const int MAXIMO = 1000;
void pedirDatos(int tam1, int tam2, char x[MAXIMO], char y[MAXIMO]);
void busquedaExhasutiva( int x, int y, char a[MAXIMO], char b[MAXIMO]);
int main(){
    int tam1, tam2;
    char cadena[MAXIMO], subcadena[MAXIMO];
    pedirDatos(tam1, tam2, cadena, subcadena);
    
    return 0;
}
void pedirDatos(int tam1, int tam2, char x[MAXIMO], char y[MAXIMO]){
    cout << "Ingrese Cadena: ";
    cin.getline(x, MAXIMO, '\n');
    cout << "Ingrese la cadena a buscar: ";
    cin >> y;

    tam1 = strlen(x);
    tam2 = strlen(y);

    busquedaExhasutiva(tam1,tam2,x,y);
}

void busquedaExhasutiva( int x, int y, char a[MAXIMO], char b[MAXIMO]){
    bool posicion= false;
    for(int i =0; i <= x-y; i++){
        int k=i, j=0;
        while(a[k] ==b[j] && j <= y){
            k++;
            j++;           
        }
        if(j > y-1){
            posicion = true;
            cout << "Se encuentra en la posición: " << i+1 << endl;
        }
    }
    if(posicion == false){
            cout << "No se encuentra la cadena" << endl; 
        }
}
