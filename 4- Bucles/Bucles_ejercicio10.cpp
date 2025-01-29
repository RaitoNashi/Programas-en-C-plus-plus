/* Escriba un programa que calcule el valor de: 1+3+5+...+2n-1 */

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	int suma = 0, resultado = 0, i = 1, n;
	
	cout<<"digite un numero: ";
	cin>>n;
	
	while(i<=n){
		suma += i;
		i += 2;
	}
	resultado = suma +(2*n)-1;
	cout<<"El valor de la operacion es: "<<resultado<<endl;
	
	system("pause");
	return 0; 
}
