//cadenas de caracteres
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	
	char palabra[]= "Alejandro";
	char palabra2[]= {'A','l','e','j','a','n','d','r','o'};
	char nombre [30];
	
	cout<<"Digite su nombre: ";
	
	cin.getline(nombre,30,'\n');
	
	cout<<nombre<<endl; 
	
	// Forma no correcta para guardar cadenas --> cin>>nombre;
	
	getch();
	return 0; 
}

