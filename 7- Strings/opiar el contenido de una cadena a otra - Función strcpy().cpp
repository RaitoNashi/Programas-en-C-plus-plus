#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	char nombre[] = "Alejandro";
	char nombre2[20];
	
	strcpy(nombre2,nombre);
	
	cout<<nombre2<<endl;
	
	getch();
	return 0;
}
