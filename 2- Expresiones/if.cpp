/* La sentencia if 
	
	if (condicion){
		instrucciones 1;
	}
	else{
		instrucciones 2;
	}
*/

#include<iostream>

using namespace std; 

int main(){
	int numero, dato = 5;
	
	cout<<"digite un numero ";
	cin>>numero;
	
	//se utiliza dos == porque esto significa igualdad, caso contrario a uno solo = 
	// el cual significa que una variable equivale a tanto, más no indica que cumpla una igualdad
	
/*	if(numero == dato){
		cout<<"El numero es 5 ";
	}
	else{
		cout<<"el numero es diferente de 5 ";
	}
	return 0;
	
*/
/*	if(numero != dato){
		cout<<"El numero no es 5 ";
	}
	else{
		cout<<"el numero es 5 ";
	}
	return 0; */
	
/*	if(numero > dato){
		cout<<"El numero es mayor que 5 ";
	}
	else{
		cout<<"el numero es menor a 5 ";
	}
	return 0; */

/*	if(numero >= dato){
		cout<<"El numero es mayor o igual a 5 ";
	}
	else{
		cout<<"el numero es menor a 5 ";
	}
	return 0; */
	
/*	if(numero < dato){
		cout<<"El numero es menor a 5 ";
	}
	else{
		cout<<"el numero es mayor a 5 ";
	}
	return 0; */
	
	if(numero <= dato){
		cout<<"El numero es menor o igual a 5 ";
	}
	else{
		cout<<"el numero es mayor a 5 ";
	}
	return 0; 

}
