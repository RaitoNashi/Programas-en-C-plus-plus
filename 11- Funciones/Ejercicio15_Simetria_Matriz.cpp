/*Desarrolar una función que determine si una matriz es simétrica o no.

Una matriz es simétrica: A=A^t
-La matriz debe ser cuadrada
- aij = aji

/2  5  9/      /2  5  9/
/5  8 -1/  ->  /5  8 -1/
/9 -1 10/      /9 -1 10/
*/

#include<conio.h>
#include<iostream>
using namespace std;

void pedirdatos();
void comprobarSimetria(int m[][100],int,int);

int m[100][100], nfilas,ncol;

int main(){
	
	pedirdatos();
	comprobarSimetria(m,nfilas,ncol);
	getch();
	return 0;
}

void pedirdatos(){
	
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

void comprobarSimetria(int m[][100],int nfilas,int ncol){
	int cont = 0;
	if(nfilas == ncol){
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j] == m[j][i]){
					cont++;
				}
			}
		}
	}
	
	if(cont == nfilas*ncol){
		cout<<"La matriz es Simetrica";
	}
	else{
		cout<<"La matriz NO es Simetrica";
	}
}
