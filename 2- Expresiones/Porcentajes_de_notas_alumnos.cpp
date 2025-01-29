/* La calificación final de un estudiante es la media ponderada de tres notas:
la NOTA DE PRÁCTICAS que cuenta un 30% del total, la NOTA TEÓRICA que cuenta un 60% 
y la NOTA DE PARTICIPACIÓN que cuenta el 10% restante. Escriba un programa
que Lea de la entrada estandar las tres notas de un alimno y escriba en la 
salida estandar su nota final*/

#include <iostream>
using namespace std; 

int main(){
	float practica,teorica,participacion, nota_final = 0;
	cout<<"ingrese la nota de practica ";
	cin>>practica;
	cout<<"ingrese la nota de teorica ";
	cin>>teorica;
	cout<<"ingrese la nota de participacion ";
	cin>>participacion;
	
	practica *= 0.30; //practica = practica * 0.30;
	teorica *= 0.60; // teorica  = teorica * 0.60;
	participacion *= 0.10; // participacion = participacion * 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nla nota final es: "<<nota_final;
	return 0;
}
