/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.*/
	#include <iostream>
	#include <stdlib.h>

	using namespace std;

	int main (){
	
	int x,y,resultado=1,i=1;
	
	cout<<"ingrese la base: ";
	cin>>x;
	
	cout<<"\ningrese la potencia ";
	cin>>y;
	
	while(i<=y){
		resultado *=x;
		i++;
	}
	
	cout<<"El resultado es "<<resultado<<endl;
	
	return 0;
}
