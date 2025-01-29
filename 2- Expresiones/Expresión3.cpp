#include <iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, resultado = 0;
	
	cout<<"ingrese el valor a ";
	cin>>a;
	
	cout<<"\ningrese el valor b ";
	cin>>b;
	
	cout<<"\ningrese el valor c ";
	cin>>c;
	
	cout<<"\ningrese el valor d ";	 
	cin>>d;
	
	cout<<"\ningrese el valor e ";
	cin>>e;
	
	cout<<"\ningrese el valor f ";	 
	cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	cout.precision(2);
	cout<<"\nel resultado es: "<<resultado;
	return 0;
}
