/* Realice un programa que calcule el valor que toma la siguiente funcion para
unos valores dados en x e y:*/

#include<iostream>
#include<math.h>

using namespace std; 

int main(){
	float x,y, resultado = 0;
	
	cout<<"digite el valor de x: ";
	cin>>x;
	cout<<"digite el valor de y: ";
	cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	//el pow sirve para potencias y el sqrt sirve para las raices
	cout<<"\nel resultado de la operacion es: "<<resultado;
	
	return 0;
}
