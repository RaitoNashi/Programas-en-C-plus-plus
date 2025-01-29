#include <iostream>
#include<conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[]{1,2,3,4,5};
	int suma = 0; 
	
		for (int i=0;i<5;i++){
			/*Se pone I=0 Porque al trabajar con vectores debemos recordar que
			ellos se inicializan en cero por lo tanto si pusieramos desde i=1 
			ya no estariamos teniendo en cuenta al valor que se encuentra en la
			posición cero. y se pone menor a 5 puesto si contamos los lugares
			del array este solo llegara a 4 y nunca a 5 porque en realdiad
			el 4 en el array sería el 5*/
			suma += numeros[i];
			
		}
		cout<<"La suma de los elementos del vector es: "<<suma<<endl;
	getch();
	return 0;
}

