/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. 
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

/*6 temperaturas 
calcular su media.
obtener la temperatura mas alta
mas baja*/ 

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
float  t, max=-273.15, min=1000, med=0;
	
	for(int i=1; i<=6; i++){

		cout<<"Value of temperature at "<<i*4<<" hours: "; cin>>t;
		
		if(t>=max){
			max=t;
		} 
		if(t<min){
			min=t;
		}	

		med += t/6;
	}
	cout<<"Larger value registered: "<<max<<endl;
	cout<<"Smaller value registered: "<<min<<endl;
	cout<<"Media of all values registered: "<<med<<endl;
	
	system("pause");
	return 0;
}
