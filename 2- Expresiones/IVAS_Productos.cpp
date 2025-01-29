#include<iostream>

using namespace std; 

int main (){
	float product, IVA = .50, resultado = 0;
	
	cout<<"digite el valor del producto ";
	cin>>product;
	
	resultado = product * IVA;
	//Con esto se consigue sacar el porcentaje 
	
	cout<<"el valor con el IVA agregado es: "<<resultado;
	
	return 0; 
}
