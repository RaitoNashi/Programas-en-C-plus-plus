// asobreb + 1 = a/b + 1 
#include<iostream>

using namespace std;

int main(){
	float a,b, resultado;
	
	cout<<"digite el valor de a ";
		cin>>a;
//Valor de a
	cout<<"digite el valor de b ";
		cin>>b;
//Valor de b
	resultado = (a/b) + 1;
//resultado de a/b + 1 
	cout.precision(2);
	cout<<"el valor de la expresion es "<<resultado;
	return  0;
} 
