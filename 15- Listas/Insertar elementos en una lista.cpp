#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipos de Funciones
void insertarLista(Nodo *&,int);

int main() {
    Nodo *Lista = NULL;
    int dato;

    cout<<"Digite un número: ";
    cin>>dato;
    insertarLista(Lista, dato);

    cout<<"Digite un número: ";
    cin>>dato;
    insertarLista(Lista, dato);

    cout<<"Digite un número: ";
    cin>>dato;
    insertarLista(Lista, dato);

    getch();
    return 0;
}


/*_Se_le_pasa_dos_parámetros_uno_de_tipo_puntero_(*)_y_referencia_(&)*/
/*Además_de_un_dato_de_tipo_primitivo_entero*/
void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    /*_Este_while_tiene_la_función_de_mantener_ordenada_la_lista_*/
    while((aux1 != NULL) && (aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1 -> siguiente;
    }

    /*Esto_se_va_a_cumplir_siempre_y_cuando_el_elemento_vaya_al_principio_de_la_lista*/
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    /*Esto_quiere_decir_que_entro_en_el_while_por_lo_tanto_ha_corrido_una_posición_inicial*/
    else{
        aux2 -> siguiente = nuevo_nodo;
    }

    nuevo_nodo -> siguiente = aux1;

    cout<<"Elemento "<< n << " insertado correctamente en la lista.";
}

