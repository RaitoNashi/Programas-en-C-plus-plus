/*Escribe un programa que lea de la entrada est�ndar un vector de n�meros y 
muestre en la salida est�ndar los n�meros del vector con sus �ndices asociados*/

#include<conio.h>
#include<iostream>
using namespace std; 

int main(){
	int numeros[100],n; 
	
	cout<<"Digite el numeros de elementos que tiene el array: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i]; //guardando todos los elementos del vector
	}
	
	//Ahora vamos a mostrar los elementos con sus indices asociados
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	getch();
	return 0;
}
