/* La sentencia do while 

	do{
		conjunto de instrucciones;
	}while(expresión lógica);
*/

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	int i;
	
	i = 10;
	
	do{
		cout<<i<<endl;
		i--; //decrementa el iterador de uno en uno 
	}while(i>=0);
	
	system("pause");
	return 0;
	
}

	/*int i;
	
	i = 0;
	
	do{
		cout<<i<<endl;
		i++; //aumenta el iterador de uno en uno 
	}while(i<=10);
	
	return 0;*/
