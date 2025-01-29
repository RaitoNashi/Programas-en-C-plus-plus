/* 1. realice un programa que solicite de la entrada estandar un entero del 1 al
10 y muestre en la salida estandar su tabla de multiplicar.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int numero; 
	
	do{
		cout<<"Digite un numero entero del 1 al 10: ";
		cin>>numero;
	}while((numero<1) || (numero >10));
	// || es la condicion'o' lo que significa que con que se cumpla una de las 
	// exigencias es suficiente pero si cumple las dos esta bien también
	
	for(int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}

	cout<<"\n\n";
	system("pause");
	return 0;
} 
