/* Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial) */

// el factorial de 5 sería: 5*4*3*2*1

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	int numero, fac = 1;
	
	cout<<"digite el numero para sacar el factorial: ";
	cin>>numero;
	
	for(int i = 1;i<=numero;i++){
		fac *= i;
	}
	cout<<"el factorial del numero es :"<<fac<<endl;
	
	system("pause");
	return 0; 
}
