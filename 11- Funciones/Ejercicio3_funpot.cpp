/*Escriba una funci�n nombrada funpot() que eleve un n�mero entero que se le transmita a una 
potencia en n�mero entero positivo y despliegue el resultado. El n�mero entero positivo
debera ser el segundo valor transmitido a la funci�n*/

#include<iostream>
#include<conio.h>

using namespace std; 

//prototipos de funciones
void funpot(int x, int y);
void pedirDatos();

int numero, exponente; 
int main(){
	
	pedirDatos();
	funpot(numero, exponente);
	getch();
	return 0;	
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite el exponente de elevacion: ";
	cin>>exponente;
}

void funpot(int x, int y){
	long resultado = 1;
	for (int i=1;i<=y;i++){
		resultado *= x;
	}
	cout<<"El resultado es: "<<resultado<<endl;
}
