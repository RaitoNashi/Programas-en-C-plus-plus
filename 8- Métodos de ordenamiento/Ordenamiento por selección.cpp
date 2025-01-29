//Ordenamiento por selección

#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	int numeros[] = {3,2,1,5,4};
	int i, j, aux, min; 
	
	for(i=0;i<5;i++){ //recorre todo mi arreglo
		min = i;
		for(j=i+1;j<5;j++){//decimos i+1 porque suponemos que el primer i ya es menor (bucle principal)
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux; 
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
