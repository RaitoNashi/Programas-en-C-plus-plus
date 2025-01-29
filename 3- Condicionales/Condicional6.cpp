/*Condicional6: Escriba un programa que lea de la entrada estándar un carácter e indique en la salida
estándar si el caracter es una vocal minúscula, es una vocal mayuscula o no es vocal.*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"digite un caracter: ";
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"es una vocal minuscula";
				break;
		case 'A':
		case 'E': 
		case 'I':
		case 'O':
		case 'U':
			cout<<"es una vocal Mayuscula";
				break;
		default:
			cout<<"NO es una vocal";
	}	
	return 0;
}
