/* Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz*/

//diagonal principal para una matriz cuadrada. es decir n*n (3x3 4x4 5x5)
/*La diagonal principal esta formada por los elementos asubii con i = 1, 2,...,n*/
#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	int Matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	//Mostrando matriz completa
	cout<<"\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz[i][j];
		}
		cout<<"\n";
	}

	cout<<"\n";
	
	//Mostrando Diagonal Principal
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<Matriz[i][j]<<endl;
			}
		}
	}
	getch();
	return 0;
}
