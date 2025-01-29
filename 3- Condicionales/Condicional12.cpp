/* Hacer un menú que considere las siguientes opciones caso 1: Cubo de un número
   caso 2: Número par o impar caso 3: salir  */

#include<iostream>

using namespace std;

int main(){
	int opc, numero, cube;
	cout<<"\t\t\tHola, Bievenido a tu Menu de confianza"<<endl;
	cout<<"\n1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. salir"<<endl;
	cout<<"opcion: ";
	cin>>opc;
	
	
	switch(opc){
		case 1:
			cout<<"Digite el numero que sera elevado al cubo: ";
			cin>>numero;
			cube = numero*numero*numero;
			cout<<"el cubo del numero solicitado es "<<cube;break;
		case 2:
			cout<<"digite un numero: ";
			cin>>numero;
			if(numero %2 == 0){
				cout<<"el numero es par"; 
			}
			else{
				cout<<"el numero es impar";
			}
			break; 
		case 3:
			break;
	}
}
