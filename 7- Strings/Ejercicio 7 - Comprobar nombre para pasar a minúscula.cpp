#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	char nombre[20];
	
	cout<<"Digite su nombre en mayusculas: ";
	cin.getline(nombre,20,'\n');
	
	if(strncmp(nombre,"A",1)==0){
		strlwr(nombre);
		cout<<nombre<<endl;
	}
	else{
		cout<<"El nombre no comienza con la letra A"<<endl;
	}
	
	
	getch();
	return 0;
}
