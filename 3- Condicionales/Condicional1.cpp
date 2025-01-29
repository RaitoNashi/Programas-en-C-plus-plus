/* 1. Escriba un programa que lea dos números y determine cuál de ellos es
el mayor.*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<< "Digite 2 numeros: ";
	cin>>n1>>n2;
//realizado de esta manera, almacenamos dos datos de manera consecutiva 
	if(n1==n2){
		cout<<"Ambos numeros son iguales";
	}
//al colocar este else indicamos que de no cumplirse la igualdad pasara a ejecutar el resto del código 
//Ahora si lo queremos mejorar simplemente lo juntamos formando el: else if	
	else if(n1>n2){
		cout<<"el mayor es: "<<n1;
	}
	else{
		cout<<"el mayor es: "<<n2;
	}
//Comprueba cual de los dos numeros es mayor 
	return 0;
}
