/*Realice una función recursiva para la serie Fibonacci
Nota: La serie de fibonacci está formada por la secuencia de números:
0,1,1,2,3,5,8,13,21,34...

Fibonacci(n) = n						  , Si n<2
			Fibonacci(n-1)+fibonacci(n-2) , Si n>=2
*/

#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;

int fibonacci(int);

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int nElementos;
	
	do{
		cout<<"Digite el número de elementos: ";
		cin>>nElementos;
	}while(nElementos <= 0);
	
	cout<<"\nSerie Fibonacci: ";
	for(int i=0;i<nElementos;i++){
		cout<<fibonacci(i)<<" , ";
	}
	getch();
	return 0; 
}

int fibonacci(int n){
	if(n<2){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}


