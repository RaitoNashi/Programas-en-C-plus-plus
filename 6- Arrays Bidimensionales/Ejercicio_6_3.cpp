/*Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar 
todo su contenido hacia otra matriz*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Matriz[2][2] = { {1,2},{3,4} };
	int Matrizprob[2][2];	
	
	//Pasando el contenido de Matriz a MatrizProb
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			Matrizprob[i][j] = Matriz[i][j];
		}
	}
	
	//Mostrando Matrizprob
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<Matrizprob[i][j];
		}
		cout<<"\n";
	}
		
	getch();
	return 0;
}
