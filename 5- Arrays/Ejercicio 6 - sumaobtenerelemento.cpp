#include <conio.h>
#include <iostream>

using namespace std;
int main(){
	int numeros[100],n;
	int suma=0,mayor=0;
	
	cout<<"Digite cantidad de elementos para el arreglo: ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		
		cout<<"\nAlmacene un numero en indice "<<i<<": ";
		cin>>numeros[i];
		
		suma += numeros[i];
		
		cout<<"Indice "<<i<<" -> "<<numeros[i]<<endl;
		cout<<"La suma es: "<<suma<<endl<<endl;
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	cout<<"------------------------------------------";
	
	cout<<"\nEl numero mayor es: "<<mayor<<endl;
	cout<<"La suma es: "<<suma<<endl;
	
	if(mayor == suma-mayor){
		cout<<"\nEl numero "<<mayor<<" es la suma de los demas."<<endl;
	}
	else{
		
		
		cout<<"\nNo existe ningun numero que sea la suma de los demas."<<endl;
	}
	
	
	getch();
	return 0;
}
