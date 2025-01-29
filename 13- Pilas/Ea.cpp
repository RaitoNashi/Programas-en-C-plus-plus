/*Cuantos triángulos isósceles se pueden construir cuyo perimetro no supere los 12cm y la medida de sus lados 
sean números enteros*/

#include <iostream>
#include<conio.h>
using namespace std; 

/*int trisos(int a, int b, int c);*/

int main(){
	int a,b,c; 
	int contador = 0;
	
	for(a=0;a<=12;a++){
		for(b=0;b<=12;b++){
			for(c=0;c<=12;c++){
				if((a+b+c<=12) && (a+b>c) && (a==b) && (c!=0)) {
					cout<<"Los valores son: "<<a<<" "<<b<<" "<<c<<endl;
					contador++;
				}
				
			}
		}
	}
	
	cout<<"La cantidad de Trisos son: "<<contador; 
	
	getch();
	return 0;
}

/*bool trisos(int a,int b,int c){
		return (a+b>c);	
};*/
