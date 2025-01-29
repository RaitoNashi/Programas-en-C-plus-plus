//Paso de parametros de tipo estructura
#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}p1;

void pedirdatos();
void mostrardatos(Persona);

int main(){
	
	pedirdatos();
	mostrardatos(p1);
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite su nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout<<"Digite su edad: ";
	cin>>p1.edad;
}

void mostrardatos(Persona p){
	cout<<"\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}
