//Ejercicio 4:
//Comprobar si un n�mero digitado por el usuario es positivo o negativo

#include<iostream>

using namespace std;

int main(){
	 int numero; 
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"el numero es 0";
	}
	else if(numero > 0){
		cout<<"El numero es positivo";
	}
	else{
		cout<<"el numero es negativo";
	}
	return 0; 
}
