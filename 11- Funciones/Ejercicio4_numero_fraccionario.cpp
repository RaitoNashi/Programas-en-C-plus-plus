/*Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por 
el usuario. por ejemplo, si se introduce el número 256.879 deberia desplegar el número 0.879*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciones
void PedirDatos();
float parteFrac(float n);

float numero;

int main(){
	PedirDatos();
	cout<<"La parte fraccionaria del numero es: "<<parteFrac(numero);
	getch();
	return 0; 
}

void PedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
}
//24.567 => los enteros solo almacenan los numeros enteros, y no lo que esta de lado de la coma

float parteFrac(float n){
	int entero=n;
	float resultado = n - entero;
	return resultado;
}
