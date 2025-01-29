/*Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le
transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor() será devuelta la segunda fecha.*/


#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;

struct Fecha{
	int dia,mes,anio; 
}f1,f2;

//Prototipo de Función
void pedirDatos();
Fecha mayor(Fecha, Fecha);
void muestra(Fecha);

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	pedirDatos();
	Fecha x = mayor(f1,f2);
	muestra(x);
	
	getch();
	return 0; 
}

void pedirDatos(){
	cout<<"Digite la primera fecha: "<<endl; 
	cout<<"Día: "; cin>>f1.dia;
	cout<<"Mes: "; cin>>f1.mes;
	cout<<"Año: "; cin>>f1.anio;
	
	cout<<"Digite la segunda fecha: "<<endl; 
	cout<<"Día: "; cin>>f2.dia;
	cout<<"Mes: "; cin>>f2.mes;
	cout<<"Año: "; cin>>f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2){
	Fecha mayorFecha; 
	
	if((f1.anio>=f2.anio)&&(f1.mes>=f2.mes)&&(f1.dia>=f2.dia)){
		mayorFecha=f1;
	}
	else{
		mayorFecha = f2;
	}
	
	return mayorFecha;
}

void muestra(Fecha x){
	cout<<"\nLa fecha más reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}
