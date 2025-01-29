/*Escriba un programa que lea tres números y 
determine cual de ellos es el mayor*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"Digite tres numeros: "; 
	cin>>n1>>n2>>n3;
	
	if((n1==n2)&&(n2==n3)){
		cout<<"Los tres numeros tienen el mismo valor";
	}
	else if((n1>n2)&&(n1>n3)){
		cout<<"El numero mayor es: "<<n1;
	}
	else if((n1>=n2)&&(n1>n3)){
		cout<<"El numero mayor es: "<<n1;
	}
	else if((n1>n2)&&(n1>=n3)){
		cout<<"El numero mayor es: "<<n1;
	}
	else if((n2>n1)&&(n2>n3)){
		cout<<"El numero mayor es: "<<n2;
	}
	else if((n2>=n1)&&(n2>n3)){
		cout<<"El numero mayor es: "<<n2;
	}
	else if((n2>n1)&&(n2>=n3)){
		cout<<"El numero mayor es: "<<n2;
	}
	else{
		cout<<"El numero mayor es: "<<n3;
	}
/*Al enganchar tantos Else if nos permite pensar en todas las variantes posibles que puedan haber, por lo tanto 
es importante fijarse en eso.
Es una solución a tomar en cuenta cuando se presentan más de dos variables */
	return 0;
}
