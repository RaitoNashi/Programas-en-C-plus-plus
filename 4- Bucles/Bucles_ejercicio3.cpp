/* 3. : Realice un programa que calcule y muestre en la salida est�ndar la suma de los cuadrados 
de los 10 primeros enteros mayores que cero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int suma = 0, cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma +=cuadrado;  //suma = suma + cuadrado

// += acorta la expresi�n para no poner otra vez suma
	}
	cout<<"el resultado es: "<<suma<<endl;
	getch();
	return 0;
}
