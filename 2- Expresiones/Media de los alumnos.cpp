/* Escriba un programa que lea la nota final de cuatro alumnos y calcule
la nota final media de los cuatro alumnos*/

	#include <iostream>

	using namespace std;
	
	int main(){
	
	float alumno1, alumno2, alumno3, alumno4, resultado = 0;
	
		cout<<"ingrese la nota del primer alumno ";
		cin>>alumno1;
		
		cout<<"\ningrese la nota del segundo alumno ";
		cin>>alumno2;
		
		cout<<"\ningrese la nota del tercer alumno ";
		cin>>alumno3;
		
		cout<<"\ningrese la nota del cuarto alumno ";
		cin>>alumno4;
		
		resultado = (alumno1 + alumno2 + alumno3 + alumno4) / 4;
		
		cout.precision(2);
		cout<<"La media de los alumnos es: "<<resultado;
		
		return 0;
	} 

