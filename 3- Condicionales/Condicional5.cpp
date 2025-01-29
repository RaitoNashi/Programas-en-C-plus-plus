/*5. Esscriba un programa que lea de la entrada estándar un carácter e indique
en la salida estandar si el carácter es una vocal minuscula o no.*/

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
/*EL BREAK SIRVE PARA DETENER EL PROGRAMA, por lo tanto solo lo utilizamos una vez en este caso
Porque como se puede ver, no hay necesidad de parar el programa y escribir distintos cout, puesto el objetivo es 
identificar una minuscula vocal, por lo tanto basta con poner un solo cout, para que muestre el mensaje al lector*/

/* Cuando se trata de caracteres simples, se debe colocar comillas simples, a diferencia de los numeros los cuales
no requieren de comillas simples*/		
		default:
			cout<<"NO es una vocal minuscula";		
	}
	
	return 0;
}
