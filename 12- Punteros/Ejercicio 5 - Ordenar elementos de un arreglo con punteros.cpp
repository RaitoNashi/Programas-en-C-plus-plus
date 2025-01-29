#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//prototipos de función
void pedirDatos(); 
void ordenarArreglo (int* , int);
void mostrarArreglo (int* , int);

int nElemento, *elemento;

int main(){
	
	pedirDatos();
	ordenarArreglo(elemento, nElemento);
	mostrarArreglo (elemento , nElemento);
	
	delete[] elemento; //liberar memoria utilizada en el arreglo dinámico que utilizamos
	getch();
	return 0; 
}

void pedirDatos(){
	cout<<"Digite el numero de elemento del Arreglo: ";
	cin>>nElemento; 
	
	elemento = new int[nElemento];
	
	for(int i=0; i<nElemento; i++){
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>*(elemento+i); //elemento[i]
	}
}

void ordenarArreglo(int *elemento, int nElementos){
	int aux;
	
	for(int i=0; i<nElementos; i++){
		for(int j=0; j<nElementos-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArreglo (int *elemento, int nElemento){
	cout<<"\n\nMostrar elementos del arreglo ordenado: ";
	for(int i=0; i<nElemento; i++){
		cout<<*(elemento+i); //elemento [i]
	}
}
