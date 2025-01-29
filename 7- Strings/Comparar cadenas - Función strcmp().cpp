#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	char palabra1[] = "becerro";
	char palabra2[] = "auto";
	
	if(strcmp(palabra1,palabra2) > 0){
		cout<<palabra1<<"esta despues alfabeticamente";
	}
	
	
	getch();
	return 0;
}
