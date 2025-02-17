#include<iostream>
#include<conio.h>
#include<stdlib.h> // New
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila (Nodo *&, int); //Prototipo
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila = NULL;
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"\nSacando los elementos de la pila: ";
	while(pila != NULL){//Mientras no sea el final de la pila
		sacarPila(pila,dato);
		if(pila !=NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\nElemento "<<n<<" Agregado a PILA correctamente"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux -> dato;
	pila = aux -> siguiente;
	delete aux; 	
}

