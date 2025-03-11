#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();

int main(){
    escribir();

    system("pause");
    return 0;
}

void escribir(){
    ofstream archivo; /*La O de output*/

    archivo.open("probando.txt",ios::out); //abriendo el archivo

    if(archivo.fail()){ //Devuelve true o false dependiendo de si se pudo abrir o crear el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); //stdlib
    }

    archivo<<"Hola que tal mi nombre es Emanuel";

    archivo.close();
}
