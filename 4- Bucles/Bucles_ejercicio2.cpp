/* 2. Realice un programa que lea de la entrada estandar numeros hasta que
se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estandar
el número de valores mayores que cero leídos*/

#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int numero, contador=0;
	
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
		if(numero>0){
			contador++;
		}
	}while(numero!=0);
		cout<<"La cantidad de numeros mayores a 0 es: "<<contador<<endl;
		
	
	system("pause");
	return 0;
}
		
	
	
	

