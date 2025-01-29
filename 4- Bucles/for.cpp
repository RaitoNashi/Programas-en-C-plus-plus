/* La sentencia for 
	
	for(expr1; expresión lógica; expr2){
		conjunto de instrucciones;
	}
*/

#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int i; 
	
	for(i=10;i>=0;i--){
		cout<<i<<endl;
	}
//lo bueno del for es que permite inicializar la variable dentro del mismo
// es decir, se puede declarar la variable tanto dentro como fuera
	getch();
	return 0;
}


/*int main(){
	int i; 
	
	for(i=1;i<=10;i++){
		cout<<i<<endl;
	}
	
	return 0;
}*/
