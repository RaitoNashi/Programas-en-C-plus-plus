/*Hacer un programa que pida al usuario que digite una cadena de caracteres luego verificar
la longitud de la cadena, y si ésta supera 10 caracteres mostrarla n caso contrario
no mostrarla*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std; 

int main(){
	char palabra[100]; 
	int longitud = 0;
	
	cout<<"Ingrese una palabra: ";
	cin.getline(palabra,100,'\n');
	longitud = strlen(palabra);
	
	if(longitud > 10){
		cout<<"La palabra es: "<<palabra<<endl; 
	}
	getch();
	return 0;
}
