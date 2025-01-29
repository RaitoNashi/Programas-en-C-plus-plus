#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	char palabra[50];
	char palabra2[50];

	cout<<"Ingrese una cadena de caracteres: ";
	cin.getline(palabra,50,'\n');
	
	strcpy(palabra2,palabra);
	
	cout<<palabra2;
	
	getch();
	return 0;
}

