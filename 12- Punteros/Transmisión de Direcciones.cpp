#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std; 

void intercambio(float* , float*); //Prototipo

int main(){
	float num1 = 20.8, num2 = 6.78;
	
	cout<<"Primer Numero: "<<num1<<endl; 
	cout<<"Segundo Numero "<<num2<<endl;
	
	intercambio(&num1 , &num2); //Llamada a la funci�n intercambio
	
	cout<<"\n\nDespu�s del intercambio: \n\n";
	cout<<"El nuevo valor de num1: "<<num1<<endl;
	cout<<"El nuevo valor de num2: "<<num2<<endl;
	
	getch();
	return 0;
	
}

void intercambio(float *dirNm1, float *dirNm2){
	float aux;
	
	//intercambio los valores de las variables
	aux= *dirNm1;
	*dirNm1 = *dirNm2;
	*dirNm2 = aux;
}
