//Método burbuja

#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	int Arreglo[] = {4,1,2,3,5};
	int i, j, aux;
	
	for(i=0;i<5;i++){ //Este se encarga de hacer rodar los números
		for(j=0;j<5;j++){ //Este for se encarga de arreglarlos según la necesidad del programador
			if(Arreglo[j] > Arreglo[j+1]){ //el j+1 representa el valor siguiente
				aux = Arreglo[j];
				Arreglo[j] = Arreglo[j+1];
				Arreglo[j+1] = aux;
			}
		}
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<Arreglo[i]<<" ";
	}
	
	cout<<"\nOrden Descendentes: ";
	for(i=4;i>=0;i--){ //Para hacer un orden descendente hay que ir restando al contador
		cout<<Arreglo[i]<<" ";
	}
	
	getch();
	return 0;
}
