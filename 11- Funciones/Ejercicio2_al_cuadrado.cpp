/*Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor
que se le transmite y despliegue el resultado. la función deberá ser capaz de elevar
al cuadrado números flotantes.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciónes
void al_cuadrado(float n);
void pedirDatos();

float numero; 

int main(){
	pedirDatos();
	al_cuadrado(numero);
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero; 
}

void al_cuadrado(float n){
	float elevacion;
	elevacion = n*n;
	cout<<"El numero al cuadrado es: "<<elevacion<<endl;
}
