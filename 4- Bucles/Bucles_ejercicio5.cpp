/*escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
	int suma = 0, elevacion = 0,n;
	
	cout<<"digite el numero de elementos a sumar: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){ //expresi�n l�gica
		elevacion = pow(2,i); //instrucciones
		suma += elevacion;
	}
	
	cout<<"\nla suma total es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
