/*8.Escribe un programa que lea de la entrada estándar tres números. Despuésdebe leer
un cuarto numeroe indicar si el número coincide con alguno de los introducidos
con anterioridad*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	cout<<"Digite 3 numeros: ";
	cin>>n1>>n2>>n3;
	cout<<"Digite un 4 numero: ";
	cin>>n4;
	
/* Esto esta claramente mal
	switch(n4){
		case (n1=n4:
			cout<<"El primer numero coincide con el cuarto";
				break;
		case n2=n4:
			cout<<"El segundo numero coincide con el cuarto";
				break;
		case n3=n4:
			cout<<"El tercer numero coincide con el cuarto";
				break;
		default:
			cout<<"Ninguno de los 3 numeros coincide";
	}
*/
	if(n4==n1 && n4==n2 && n4==n3){
		cout<<"los cuatros numeros son iguales";
	}
	else if(n4==n1){
		cout<<"el numero es igual al primero digitado";
	}
	else if(n4==n2){
		cout<<"el numero es igual al segundo digitado";
	}
	else if(n4==n3){
		cout<<"el numero es igual al tercero digitado";
	}
	else{
		cout<<"el numero no es igual a ninguno digitado";
	}  
}
