/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos: Nombre, edad promedio, pedir datos al usuario 
para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	float mayor=0;
	int pos;
	
	
	for(int i=0;i<3;i++){
		//guardando los datos para 3 alumnos
		fflush(stdin);
		cout<<i+1<<". Digite su nombre: "; 
		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<i+1<<". Digite su edad: ";
		cin>>alumnos[i].edad;
		cout<<i+1<<". Digite su promedio: ";
		cin>>alumnos[i].promedio;
		cout<<"\n";
		
		//comprobando quien de los 3 posee el mayor promedio
		if(alumnos[i].promedio>mayor){
			mayor = alumnos[i].promedio;
			pos = i;
		}
	}
	//imprimiendo datos del mejor promedio
	cout<<"/*****************/"<<endl;
	cout<<"\nNombre: "<<alumnos[pos].nombre<<endl;
	cout<<"\nEdad: "<<alumnos[pos].edad<<endl;
	cout<<"\nPromedio: "<<alumnos[pos].promedio<<endl;
	cout<<endl<<"/*****************/"<<endl;
	getch();
	return 0;
}
