//ejemplo encontrar el mayor de 2 numeros

#include<conio.h>
#include<iostream>
using namespace std;

//prototipo de funci�n
int encontrarMax(int x, int y);

int main(){
	int n1,n2;
	
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;
	cout<<"\n";
	cout<<"El mayor de los 2 numeros es: "<<encontrarMax(n1,n2); //por suponer 5
	
	getch();
	return 0;
}

//definici�n de funci�n

int encontrarMax(int x, int y){
	int numMax;
	
	if(x>y){
		numMax = x;
	}
	else{
		numMax = y;
	}
	
	return numMax;
}
