//Estrcutura B�sica

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1,persona2;

int main(){
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<"\n---Imprimiendo datos---\n";
	cout<<persona1.nombre<<endl;
	cout<<persona1.edad;
	
	getch();
	return 0; 
}

/*
persona1 ={"Alejandro",20},
persona2 ={"Ruperto", 15};

int main(){
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1:"<<persona1.edad<<endl; 
	
	cout<<"\nNombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2:"<<persona2.edad<<endl;
	getch();
	return 0;
}
*/

