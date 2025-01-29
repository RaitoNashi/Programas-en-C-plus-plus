//Ordenamiento por Inserción

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {4,2,3,1,5};
	int i, pos, aux;
	
	for(i=0;i<5;i++){
		pos = i; //es la flechita que indica la posición del arreglo
		aux = numeros[i]; //Almacena el número en el que vamos, (No tiene relación con la posición)

		while((pos>0) && (numeros[pos-1]> aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
			numeros[pos] = aux;
		/*(numeros[pos-1]>aux)Con esto decimos que el número de la izquierda
		es mayor al numero actual (aux), de serlo se produce el cambio 
		
		numeros[pos] = numeros[pos-1] --> con esto lo que tratamos de decir es que
		para hacer el cambio sera necesario que el numero pos (es decir la posición del numero)
		cambie por la posición de numeros[pos-1]. Dicho de otra forma si nos encontramos
		en la posición 1, este cambiara su número de darse el caso, por la posición 0*/
		
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
