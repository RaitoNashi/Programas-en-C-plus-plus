#include<conio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	char cad1[10],cad2[10];
	int valorEntero;
	float valorFlotante;
	
	cout<<"Digite un valor entero: ";
	cin.getline(cad1,10,'\n');
	cout<<"Digite un valor flotante: ";
	cin.getline(cad2,10,'\n');
	
	valorEntero = atoi(cad1);
	valorFlotante = atof(cad2);
	
	cout<<"La suma es: "<<valorEntero + valorFlotante<<endl;
	getch();
	return 0;
}
