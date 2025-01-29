/*Desarrollar un programa que determine si una matriz es 
simétrica o no, Una matriz es simétrico si es cuadrada y si es igual a su matriz transpuesta

/8 1 3/    /8 1 3/
/1 7 4/    /1 7 4/
/3 4 9/    /3 4 9/*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Matriz[100][100], filas, columnas;
	char band='F';
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>Matriz[i][j];
		}
	}
	
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(Matriz[i][j] == Matriz[j][i]){
					band = 'V';
				}
			}
		}
	}
	if(band == 'V'){
		cout<<"La matriz es simetrica: ";
	}
	else{
		cout<<"La matriz no es simetrica: ";
	}
	getch();
	return 0;
}
