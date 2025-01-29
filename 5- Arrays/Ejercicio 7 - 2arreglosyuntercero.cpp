#include<conio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letras1[] = {'a','b','c','d','e'};
	char letras2[] = {'f','g','h','i','j'};
	char almacen[10];
	
	//copiando los elementos de letras 1 hacia almacen
	for(int i=0;i<5;i++){
		almacen[i] = letras1[i];
	}
	
	//copiando los elementos de letras 2 hacia almacen
	for(int i=5;i<10;i++){
		almacen[i] = letras2[i-5];
	}
	
	//poner el nuevo arreglo 
	for(int i=0; i<10;i++)
	cout<<almacen[i]<<endl;
	getch();
	return 0;
}

