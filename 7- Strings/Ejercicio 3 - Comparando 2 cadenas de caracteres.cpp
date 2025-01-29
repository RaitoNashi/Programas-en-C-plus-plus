#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	char palabra[50];
	char palabra2[50];
	
	cout<<"Digite una palabra/oracion: ";
	cin.getline(palabra,50,'\n');
	
	cout<<"Digite una palabra/oracion: ";
	cin.getline(palabra2,50,'\n');
	
	if(strcmp(palabra,palabra2)==0){
		cout<<"Ambas cadenas son iguales";
	}
	else if(strcmp(palabra,palabra2) > 0){
		cout<<palabra<<" es mayor alfabeticamente";
	}
	else{
		cout<<palabra2<<" es mayor alfabeticamente";
	}
	
	getch();
	return 0;
}
