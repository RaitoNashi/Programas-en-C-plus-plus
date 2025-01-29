#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	char palabra1[] = "Alejandro";
	char palabra2[] = "Emanuel";
	
	strupr(palabra1);
	strupr(palabra2);
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Son iguales";
	}
	else{
		cout<<palabra1<<" y "<<palabra2<<" no son iguales";
	}
	
	
	getch();
	return 0;
}

