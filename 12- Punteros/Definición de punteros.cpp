#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dir_num;
	
	num = 20;
	dir_num = &num;
	
	cout<<"N�mero: "<<*dir_num<<endl; //Muestra lo que hay almacenado
	cout<<"Direcci�n de memoria: "<<dir_num<<endl;
	cout<<"Direcci�n de memoria: "<<&num<<endl;
	
	
	getch();
	return 0;
}
