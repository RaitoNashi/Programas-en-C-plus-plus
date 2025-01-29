/* Escriba un programa que calcule las soluciones de una ecucación de segundo grado de la forma ax^2 + bx + c = 0
teniendo en cuenta que: menosb mas menos  raiz b al cudrado  menos 4 por a por c dividido 2 */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c,resultado = 0, resultado2 = 0;
	
	cout<<"digite el valor de a ";
	cin>>a;
	
	cout<<"digite el valor de b ";
	cin>>b;
	
	cout<<"digite el valor de c ";
	cin>>c;
	
	resultado = (-b + (sqrt(pow(b,2)-4*a*c)))/(2*a); 
	resultado2 = (-b - (sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout<<"el resultado es"<<resultado;
	cout<<"el resultado es"<<resultado2;
	
	return 0;
	
	
}
