/*Escribe un programa que defina un vector de n�meros y muestre en la salida 
est�ndar el vector en orden inverso�del �ltimo al primer elemento.*/
	
#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		int numeros[100],n; 
		
		cout<<"Digite el numeros de elementos que tiene el array: ";
		cin>>n;
		
		for(int i=0;i<n;i++){
			cout<<"Digite un numero: ";
			cin>>numeros[i]; //guardando todos los elementos del vector
		}
		
		//Ahora vamos a mostrar los elementos con sus indices asociados
		for(int i=n-1;i>=0;i--)/*(int i=n-1;i>=0;i--)*/{
			cout<<i<<" -> "<<numeros[i]<<endl;
		}
		getch();
		return 0;
	}

