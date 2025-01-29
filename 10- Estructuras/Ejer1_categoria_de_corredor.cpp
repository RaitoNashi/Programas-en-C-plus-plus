/*Ejercicio 1: Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo, club, 
pedir datos al usuario para un corredor, y asignarle una categoría de competición:
- Juvenil menor o = 18 años
- Señor menor o = 40 años
- Veterano mayor a 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor{
	char Nombre[20];
	int Edad;
	char Sexo[20];
	char Club[20];
}c1;

int main(){
	char categoria[20];
	
	cout<<"Nombre: ";
	cin.getline(c1.Nombre,20,'\n');
	cout<<"Edad: ";
	cin>>c1.Edad;
	cout<<"Sexo: ";
	fflush(stdin);
	cin.getline(c1.Sexo,20,'\n');
	cout<<"Club: ";
	cin.getline(c1.Club,20,'\n');
	
	if(c1.Edad <= 18){
		strcpy(categoria,"Juvenil");
	}
	else if(c1.Edad <= 40){
		strcpy(categoria,"Senior");
	}
	else{
		strcpy(categoria,"Veterano");
	}
	cout<<"------------------------";
	cout<<"\n\nDatos del corredor: "<<endl;
	cout<<"Nombre: "<<c1.Nombre<<endl;
	cout<<"Edad: "<<c1.Edad<<endl; 
	cout<<"Sexo: "<<c1.Sexo<<endl;
	cout<<"Club: "<<c1.Club<<endl;
	cout<<"categoria: "<<categoria<<endl;
	cout<<"\n------------------------";
	
	getch();
	return 0; 
}
