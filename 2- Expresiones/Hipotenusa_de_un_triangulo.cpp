	#include<iostream>
	#include<math.h>
	
	using namespace std;
	int main(){
		float mayor,menor,x;
		
		cout<<"ingrese el valor del cateto mayor ";
		cin>>mayor;
		
		cout<<"\ningrese el valor del cateto menor ";
		std:cin>>menor;
		
		x = (mayor * mayor) + (menor * menor);
		
		x = (sqrt (x));
		
		//la función (sqrt) sirve para encontrar la raiz de un numero dado
		
		cout.precision(2);
		
		cout<<"\nel valor de la hipotenusa es "<<x;
		
		return 0;
			
	}
	
