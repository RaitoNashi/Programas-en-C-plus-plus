#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dir_num;
	
	num = 20;
	dir_num = &num;
	
	cout<<"Número: "<<*dir_num<<endl; //Muestra lo que hay almacenado
	cout<<"Dirección de memoria: "<<dir_num<<endl;
	cout<<"Dirección de memoria: "<<&num<<endl;
	
	
	getch();
	return 0;
}
