/*realice un programa que lea un valor entero y determine si se trat de un
número par o impar.*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"el numero es cero";
	}
	else if(numero%2==0){
//estamos aplicando una operación aritmetica que toma el resto de la división y evalua si es 0 o mayor a este
//De esta forma si el valor es 0, entenderemos que el numero es par, caso contrario el numero es impar
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	return 0;
}
