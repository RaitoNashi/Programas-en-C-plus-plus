/*Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentosque se transmitan a la función 
cuando sea llamada suponga que los tres argumentps serán del mismo tipo de datos*/

#include<iostream>
#include<conio.h>
using namespace std; 

//Prototipos de funciones
template<class T>
T maximo(T dato1, T dato2, T dato3);

int main(){
	int dato1 = 4, dato2 = 6, dato3 = 8;
	float dato11 = 4.56, dato22 = 6.67, dato33 = 3.55;
	char dato111 = 'o', dato222 = 'c', dato333 = 'b';

	cout<<"El maximo valor es: "<<maximo(dato1,dato2,dato3)<<endl;
	cout<<"El maximo valor es: "<<maximo(dato11,dato22,dato33)<<endl;
	cout<<"El maximo valor es: "<<maximo(dato111,dato222,dato333)<<endl;
	
	getch();
	return 0;
}

template<class T>
T maximo(T dato1, T dato2, T dato3){
	T max;
	if((dato1>=dato2) && (dato1 >= dato3)){
		max = dato1;
	}
	else{
		if((dato2>=dato1) && (dato2>=dato3)){
			max = dato2;
		}
		else{
			max = dato3;
		}
	}
	
}
