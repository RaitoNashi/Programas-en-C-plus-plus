//Busqueda secuencial

//a[5] ={3,4,2,1,5} d ato = 4;

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	/*Funciona para caracteres también, cambiando lo que hay que cambiar, se puede hacer*/
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	//Busqueda secuencial
	cout<<"Digite un numero cualquiera: ";
	cin>>dato;
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"\nEl numero a buscar no existe en el arreglo";
	}
	else if(band == 'V'){
		cout<<"\nEl numero ha sido encontrado en la pos: "<<i-1<<endl;	
	}
	
	getch();
	return 0;
}
