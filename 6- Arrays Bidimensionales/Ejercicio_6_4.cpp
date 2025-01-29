
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int Matriz[100][100], dato, nfilas, ncolumnas; 
	int Matriz2[100][100];
	
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	
	cout<<"Digite el numero de columnas: ";
	cin>>ncolumnas;
	
	srand(time(NULL)); //Generar numeros pseudoaleatorios
	
	//Rellenando la matriz de numeros aleatorios
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncolumnas;j++){
			dato = 1+rand()%(100); //Generando numeros aleatorios entre 1 y 100
			Matriz[i][j]= dato;
		}
	}
	
	//Copiando el Contenido a otra matriz
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncolumnas;j++){
			Matriz2[i][j] = Matriz[i][j];
		}
	}
	
	//Imprimiendo Matriz2 en pantalla

	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncolumnas;j++){
			cout<<Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}


	getch();
	return 0;
}
