#include<iostream>
#include<conio.h>

using namespace std; 

void intercambio(float &x, float &y){
	float aux;
	
	aux = x;
	x = y;
	y = aux; 
	
}

void ordenacionShell(float a[],int n){
	int salto, i, j, k;
	salto = n/2;
	0,1,2,3,4
	/*con 'i' comenzando en salto y hasta que sea menor que 'n' estamos delimitando
	cual y cual salto vamos a ir dando*/
	while(salto>0){
		for(i=salto;i<n;i++){ 
			j = i - salto; // permite ir cambiando de posición en el arreglo de uno en uno
			while(j>=0){
				k = j + salto; /*el indice k sirve para saber cual sera el elemento de la derecha
								Con el cual se ira comparando*/
				if(a[j] <= a[k]){ //par de elementos ordenados
					j = -1;
				}
				else{ //par de elementos estan desordenados
					intercambio (a[j],a[k]);
					j -= salto;
				}	
			}
		}
		salto = salto/2;
	}
}

int main(){
	float arreglo[100]= {};
	int n;
	
	cout<<"Digite la cantidad de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese un elemento del array: ";
		cin>>arreglo[i];
	}
	
	ordenacionShell(arreglo,n);
	
	cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;
	for(int i=0;i<n;i++){
		cout<<arreglo[i]<<"|";
	}
	
	cout<<endl; 
	
	cout<<"\nArreglo Ordenado - Forma Descendente"<<endl;
	for(int i=n;i>=0;i--){
		cout<<arreglo[i]<<"|";
	}
	
	cout<<endl; 
	
	getch();
	return 0; 
}
