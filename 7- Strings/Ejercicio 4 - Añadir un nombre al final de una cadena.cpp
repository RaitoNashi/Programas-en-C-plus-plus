#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	char cad1[] = "Hola que tal ";
	char cad2[20];	
	
	cout<<"Escribir su nombre: ";
	cin.getline(cad2,20,'\n');
	
	strcat(cad1,cad2);

	cout<<"Frase final: "<<cad1<<endl;
	
	getch();
	return 0;
}

