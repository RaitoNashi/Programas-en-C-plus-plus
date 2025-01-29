/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int suma = 0, resta = 0, n, i, resultado = 0; 
	
	cout<<"digite un N numero que posteriormente se sumaran y restaran: ";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2 == 0){
		suma += i;
	}else
		resta += i;
	}
	resultado = resta - suma;
	cout<<"el resultado es: "<<resultado<<endl;
	
	system("pause");
	return 0; 
}

