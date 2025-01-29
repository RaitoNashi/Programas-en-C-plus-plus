/* Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales). */

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	int numero, fac = 1, suma = 0, i = 1; 
		
	for(int i = 1;i<=numero;i++){
		cout<<"escribir un valor de n cualquier, el cual el siguiente sera uno menor a ese: ";
		cin>>numero;
		fac *= i;
	}

	//tiziano dice (es un for dentro de otro for)
	return 0; 
}
