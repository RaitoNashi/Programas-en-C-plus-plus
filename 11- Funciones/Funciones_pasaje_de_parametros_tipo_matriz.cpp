//Paso de parametros tipo matriz
//Elevar al cuadrado todo los elementos de una matriz
#include<iostream>
#include<conio.h>
using namespace std;

void mostrarMatriz(int m[][3], int,int);
void CalcularCuadrado(int m[][3], int, int);
void mostrarMatrizElevada(int m[][3],int,int);

int main(){
	const int NFILAS = 2;
	const int NCOL = 3;
	int m[NFILAS][NCOL] = {{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,NFILAS,NCOL);
	CalcularCuadrado(m,NFILAS,NCOL);
	mostrarMatrizElevada(m,NFILAS,NCOL);
	 
	getch();
	return 0;
}

void mostrarMatriz(int m[][3], int nfilas,int ncol){
	cout<<"Mostrando matriz Original\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void CalcularCuadrado(int m[][3], int nfilas, int ncol){
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			m[i][j] *= m[i][j];
		}
		cout<<"\n";
	}
}

void mostrarMatrizElevada(int m[][3],int nfilas,int ncol){
	cout<<"Mostrando matriz elevada al cuadrado:\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}
