/*Escriba una funci�n recursiva que calcule un n�mero elevado a una potencia entera
mayor o igual que cero: x^y.

	potencia(x,y) = x				  , y=1
				    x*potencia(x,y-1) , y>1
*/

#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;

//Prototipo de funci�n
int potencia(int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int base,exponente;
	
	cout<<"Digite la base: "; cin>>base;
	cout<<"Digite el exponente: "; cin>>exponente; 
	
	cout<<"\nPotencia de "<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	getch();
	return 0;
}

int potencia(int x,int y){
	int pot;
	
	if(y==1){//Caso Base
		pot = x;
	}
	else{//Caso general
		pot = x * potencia(x,y-1);
	}
	return pot; 
}
