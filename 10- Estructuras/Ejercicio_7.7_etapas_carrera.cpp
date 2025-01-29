/*7. Defina una estructura que indique el tiempo empleado por un ciclista en
una etapa. la estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en
correr todas las etapas.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct etapas{
	int horas;
	int minutos;
	int segundos;
}et[100];

int main(){
	int n_etapas,horasT=0,minutosT=0,segundosT=0;
	
	cout<<"Digite el numero de etapas: ";
	cin>>n_etapas;
	
	for(int i=0;i<n_etapas;i++){
		cout<<"Horas: ";
		cin>>et[i].horas;
		cout<<"Minutos: ";
		cin>>et[i].minutos;
		cout<<"segundos: ";
		cin>>et[i].segundos;
		
		horasT = horasT + et[i].horas;
		minutosT = minutosT + et[i].minutos;
		if(minutosT >=60){
			minutosT -=60;
			horasT++;
		}
		segundosT= segundosT + et[i].segundos;
		if(segundosT >=60){
			segundosT -=60;
			minutosT++;
		}
		cout<<"\n";
		
	}
	
	cout<<"\nTiempo total empleado\n";
	cout<<"Hora: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	getch();
	return 0;
}
