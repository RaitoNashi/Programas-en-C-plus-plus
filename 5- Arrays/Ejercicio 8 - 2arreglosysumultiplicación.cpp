//Hacer un programa que lea 5 números en un arreglo, los copie a otro 
//arreglo multiplicados por 2 y muestre el segundo arreglo.
#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros1[] = {1,2,3,4,5};
	int numeros2[5];
	int almacen[5];
	
	//copiando l
	for(int i=0;i<5;i++){
		numeros2[i] = numeros1[i];
	}
	
	for(int i=0;i<5;i++){
		numeros2[i] *= 2;
	}
	//poner el nuevo arreglo 
	for(int i=0; i<5;i++){
		cout<<"El nuevo arreglo es: "<<numeros2[i]<<endl;
	}
	getch();
	return 0;
}
