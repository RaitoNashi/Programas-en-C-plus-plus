/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int Matriz2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
	
	cout<<"Mostrando las 2 matrices: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nLa suma de las 2 matrices es: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz[i][j] + Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
