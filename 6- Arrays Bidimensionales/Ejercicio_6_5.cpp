/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta la 
matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Matriz[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>Matriz[i][j];
		}
	}
	
	cout<<"\n----Matriz original----\n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n----Matriz Transpuesta----\n\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz[j][i];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
