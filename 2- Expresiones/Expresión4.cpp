#include<iostream>

using namespace std;
int main(){
	float a, b, c, d, resultado = 0;
	
	cout<<"digite el valor de a "; 
	cin>>a;
	
	cout<<"\ndigite el valor de b "; 
	cin>>b;
	
	cout<<"\ndigite el valor de c que cuando se reste con d, no de cero "; 
	cin>>c;
	
	cout<<"\ndigite el valor de d que cuando se reste con c, no de cero "; 
	cin>>d;
	
	resultado = a + (b/(c-d));
	cout<<"\nel valor del resultado es: "<<resultado;
	return 0;	
}
 
