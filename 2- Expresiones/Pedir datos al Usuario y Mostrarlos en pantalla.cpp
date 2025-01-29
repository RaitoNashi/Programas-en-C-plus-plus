//Pedir datos al Usuario y Mostrarlos en pantalla 
//Jugar con los valores colocando: valores que no corresponde con el tipo de variable
#include<iostream>

using namespace std;
int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: ";
	cin>>edad;
	cout<<"Digite su sexo: ";
	cin>>sexo;
	cout<<"Digite su altura en metros: ";
	cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;
	return 0;
}
