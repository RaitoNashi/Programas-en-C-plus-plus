/*Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas, posteriormente mostrar la matriz en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Matriz[100][100], filas, columnas;
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	//Almacenando elemmentos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite los numeros de la matriz ["<<i<<"]["<<j<<"]: ";
			cin>>Matriz[i][j];
		}
	}
	
	//Mostrando la matriz
	cout<<"-------------------------\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<Matriz[i][j];
		}
		cout<<"\n";
	}
	/*Cada vez que se ejecuta y se rellena la primer fila, se tiene que hacer
	un salto de linea para que justamente quede como una matriz, de lo 
	contrario simplemente quedarían los numeros todos en un mismo nivel*/
	
	getch();
	return 0;
}
