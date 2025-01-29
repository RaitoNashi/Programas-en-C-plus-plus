#include<iostream>
#include<conio.h>
#include<stdlib.h> //funciona new y delete
using namespace std; 

//Prototipo de función
void pedirNotas();
void mostrarNotas();
int numCalif, *calif;

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif; //Liberando el espacio de bytes utilizando anteriormente
	
	getch();
	return 0;
}

void pedirNotas(){
	cout<<"Digite el numero de calificaciones: ";
	cin>>numCalif;
	
	calif = new int[numCalif]; //Crear el arreglo 
	
	for(int i=0; i<numCalif; i++){
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	} 
}

void mostrarNotas(){
	cout<<"\nMostrando notas del Usuario:\n";
	for(int i=0; i<numCalif; i++){
		cout<<calif[i]<<endl;
	}
}
