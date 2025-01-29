/*Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva
en la salida est�ndar los n�meros del ini al fin. Escriba una versi�n que esscriba los
n�meros en orden ascendente.

	escribeNumeros(ini,fin) = ini		    			, Si ini=fin
							  escribeNumeros(ini,fin-1)	, Si fin>ini

*/

#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;

int escribeNumeros(int, int);


int main(){
	setlocale(LC_CTYPE, "Spanish");
	int ini,fin;
	
	cout<<"Digite un inicio: "; cin>>ini;
	cout<<"Digite un final: "; cin>>fin; 
	
	for(int i=ini; i<=fin;i++){
		cout<<escribeNumeros(i,fin)<<" ";
	}
	
	getch();
	return 0; 
}

int escribeNumeros(int ini, int fin) {
	if(ini == fin){
		return ini;
	}
	else{
		return escribeNumeros(ini, fin-1);
	}	
}
