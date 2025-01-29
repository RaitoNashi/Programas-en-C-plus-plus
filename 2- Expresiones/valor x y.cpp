/* Escriba un fragmento de programa que intercambie los valores de dos
variables.*/

#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"Digite el valor de x ";
		cin>>x;
	cout<<"digite el valor de y ";
		cin>>y;
	/*
	x = 10
	y = 5
	*/
	
	aux = x;
	x = y; 
	y = aux;
	//(aux) toma el valor de (x), posteriormente (x) toma el valor de (y), finalmente (y) toma el valor de (aux)
	
	cout<<"\n el nuevo valor de x es :"<<x<<endl;
	
	cout<<"\n el nuevo valor de y es :"<<y<<endl;
	
	//En caso de que fueran 3 variables que tuvieramos que digitar se haría de la siguiente forma 
	// todo esto siento una hipótesis por parte del diseñador de este código
	
	/*
	int x,y,z,aux,aux2,aux3;
	
	cout<<"Digite el valor de x ";
		cin>>x;
	cout<<"digite el valor de y ";
		cin>>y;
	cout<<"digite el valor de z ";
		cin>>z;
	
	aux = x;
	aux2 = y;
	aux3 = z;
	z = aux;
	y = aux3;
	x = aux2;
	
	cout<<"\n el nuevo valor de x es :"<<x<<endl;
	
	cout<<"\n el nuevo valor de y es :"<<y<<endl;
	
	cout<<"\n el nuevo valor de z es :"<<z<<endl;
	

	*/
	
		
}
