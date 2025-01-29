#include <iostream> 
#include <conio.h>
using namespace std;
int main(){
	int numeros[]{1,2,3,4,5};
	int multi = 1;
	
		for(int i=0;i<5;i++){
		multi *= numeros[i];
			
		}
	cout<<"La multi de los elementos del vector es: "<<multi<<endl;
	getch();
	return 0;
}
