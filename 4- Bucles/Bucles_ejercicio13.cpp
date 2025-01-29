/* Hacer un que realice la serie fibonacci -- 1 1 2 3 5 8 13...n  */

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	int n, x=0, y=1, z=1;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	cout<<"1 ";
	for(int i=1;i<n;i++){
		z = x + y;
			cout<<z<<" "; //1-2-3-5
			x = y; // x valdra lo que vale Y 1 1 2
			y = z; // y vale lo que vale z 1 2 3
	//al cambiar los valores dentro del for, podemos lograr hacer una función recursiva
	}
/*Basicamente los valores se van cambiando a medida que el for esta activado, hasta llegar a n 
de esta manera entendemos que primeramente se realiza la operación que dara valor a Z, la cual es
 x + y o 0 + 1 lo que daría como resultado que Z valga 1.
 Ahora bien, más abajo del cout, vemos como habra un intercambio de valores, donde la x pasara a valer el valor de y
 en el primer caso sería 1, y donde Y pasa a valer el valor de z, el cual es 1 también. Ahora bien, en el segundo paso
 se vuelve a iniciar el ciclo pero ahora con X e Y valiendo 1 los dos, por lo tanto dando como resultado 2.
 es asi que el proceso se vuelve a repetir nuevamente obteniendo que X valdra 1, puesto Y aun no ha cambiado de valor
 y justamente después de este cambio se efectua el y = z, lo cual hace que Y valga 2, recordando que anteriormente
 la suma de 1 + 1 le habia dado el valor a Z de 2, este proceso se repetira hasta los N elementos deseados*/
	cout<<"\n";
	system("pause");
	return 0; 
}
