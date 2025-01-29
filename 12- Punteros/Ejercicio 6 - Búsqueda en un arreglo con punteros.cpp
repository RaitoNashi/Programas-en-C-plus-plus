#include<iostream>
#include<conio.h>
#include<stdlib.h> //new and delete
using namespace std;

//Prototipo de función
void pedirDatos();
void buscarElemento(int *, int);

int nElementos, *elemento; 

int main(){
	pedirDatos();
	buscarElemento(elemento, nElementos);
	
	delete[] elemento;
	
	getch();
	return 0; 
}

void pedirDatos(){
	cout<< "Digite el numero de elementos del arreglo: ";
	cin>>nElementos; 
	
	elemento = new int[nElementos];
	
	for(int i=0; i<nElementos; i++){
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>*(elemento+i); //elemento[i];
	}
}

void buscarElemento(int *elemento, int nElementos){
	int dato,i;
	bool band = false;
	
	cout<<"\n\nDigite un numero a buscar: ";
	cin>>dato;
	
	//Busqueda secuencial
	i = 0;
	while((i<nElementos) && (band == false)){
		if(*(elemento+i) == dato){
			band = true;
		}
		i++;
	}
	
	if(band == false){
		cout<<"El dato "<<dato<<" no existe en el arreglo"<<endl;
	}
	else{
		cout<<"El numero "<<dato<<" Si existe en el arreglo, pos: "<<i-1<<endl;
	}
}
