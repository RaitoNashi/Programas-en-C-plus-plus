/*Escriba  una funci�n nombrada cambio() que tenga un par�metro en n�mero entero y seis par�metros de referencia en n�mero entero 
nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La funci�n tiene que considerar el valor entero 
transmitido como una cantidad en d�lares y convertir el valor en el n�mero menor de billetes equivalentes*/

#include<conio.h>
#include<iostream>
using namespace std; 

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int valor,cien,cincuenta,veinte,diez,cinco,uno;
	
	cout<<"Digite la cantidad en dolares: ";
	cin>>valor;
	
	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"Cantidad de billetes a entregar como cambio: "<<endl;
	cout<<"\nCien "<<cien<<endl;
	cout<<"cincuenta "<<cincuenta<<endl;
	cout<<"veinte "<<veinte<<endl;
	cout<<"diez "<<diez<<endl;
	cout<<"cinco "<<cinco<<endl;
	cout<<"uno "<<uno<<endl;
	
	getch();
	return 0;
}

void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %= 20;
	diez = valor/10;
	valor %= 10;
	cinco = valor/5;
	valor %= 5;
	uno = valor/1;
	valor %= 1;
	
}

