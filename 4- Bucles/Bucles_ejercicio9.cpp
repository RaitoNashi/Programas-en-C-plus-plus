/* Escriba un programa que calcule el valor de: 1+2+3+...+n*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int suma = 0, i = 1, n;
	
	cout<<"digite un numero N: ";
	cin>>n;
	
	while(i<=n){
		suma += i;
		i++;
	}
	
	cout<<"el valor de la suma es: "<<suma;
	
	getch();
	return 0;
}
