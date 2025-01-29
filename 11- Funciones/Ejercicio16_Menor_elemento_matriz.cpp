/*Realice una función que dada una matriz y un número de fila de la matriz devuelva
el menor de los elementos almacenados en dicha fila.*/
#include<iostream>
#include<conio.h>
using namespace std;

void pedirdatos();
int comprobarmenorelemento(int m[][100],int,int);

int m[100][100], nfilas,ncol;
 
int main(){
	
	pedirdatos();
	cout<<"\nEl menor elemento es: "<<comprobarmenorelemento(m,nfilas,ncol);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

int comprobarmenorelemento(int m[][100],int nfilas,int ncol){
	int fila, menor=99999;
	
	cout<<"\nDigite un numero de fila para comprobar menor elemento: ";
	cin>>fila;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(i==fila){
				if(m[i][j] < menor){
					menor =m[i][j];
				}
			}
		}
	}	
	return menor; 
}
