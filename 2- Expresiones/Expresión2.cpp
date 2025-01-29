#include<iostream>

using namespace std; 

int main(){
	float a, b, c, d, resultado = 0;
	
	cout<<"ingrese el valor a ";
	cin>>a;
	
	cout<<"ingrese el valor b ";
	cin>>b;
	
	cout<<"ingrese el valor c ";
	cin>>c;
	
	cout<<"ingrese el valor d ";	 
	cin>>d;
	
	resultado = (a+b) / (c+d);
	
	cout<<"el resultado es: "<<resultado; 

	return 0; 
}
