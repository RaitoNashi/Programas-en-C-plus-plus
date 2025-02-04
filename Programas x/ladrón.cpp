#include <iostream>
#include <conio.h>
#include <locale.h> // Para colocar tildes
#include <thread>   // Necesario para std::this_thread
#include <chrono>   // Necesario para std::chrono::milliseconds
#include <ctime>
#include <cstdlib>

using namespace std;

void EscribirConEfecto(const string&, int);
void MaquinaJugadora();
void ReglasDelJuego();

int main() {
    int opcion;
    bool flag = 1;
    setlocale(LC_CTYPE, "Spanish");

    EscribirConEfecto("***Hola, bienvenido al programa de competiciones contra la máquina.***", 35);

    while(flag){

    cout << "\nChose an option in the menu game " <<endl;
    cout << "1. Play"             <<endl;
    cout << "2. Rules"            <<endl;
    cout << "3. Quit"             <<endl;
    cout << "4. clean the screen" <<endl;

    cin >> opcion;

        switch(opcion) {
            case 1:
                MaquinaJugadora();
            break;

            case 2:
                ReglasDelJuego();
            break;

            case 3:
                flag = 0;
            break;

            case 4:
                system("cls");
            break;

            default:
                cout << "That not the expected option." << endl;
            break;
        }
    }

    return 0;
}

void MaquinaJugadora(){
    int PuntuacionJugador = 0;
    int PuntuacionMaquina = 0;
    int Elecciones[5];
    int EleccionMaq;
    srand(time(0));

    cout <<"Let's play" << endl;
    for(int i=0; i<5; i++){

        cout<<"Elige un valor entre 0 y 1: "<<endl;
        cin>>Elecciones[i];

        if(Elecciones[i-1] == 1){
            EleccionMaq = 1;
        }
        else if(Elecciones[i-1] == 0){
            EleccionMaq = 0;
        }
        else{
            EleccionMaq = 0;
        }

        if(Elecciones[i] == 1 && EleccionMaq == 1){
            PuntuacionJugador += 1;
            PuntuacionMaquina += 1;
        }
        else if(Elecciones[i] == 1 && EleccionMaq == 0){
            PuntuacionJugador += 5;
        }
        else if(Elecciones[i] == 0 && EleccionMaq == 1){
            PuntuacionMaquina += 5;
        }
        else{
            PuntuacionJugador +=3;
            PuntuacionMaquina +=3;
        }

    }

    if(PuntuacionJugador > PuntuacionMaquina){
        cout<<"Ganó el jugador con la total cantidad de:" <<PuntuacionJugador;
    }
    else if(PuntuacionJugador == PuntuacionMaquina){
        cout<<"han empatado con la total suma de " << PuntuacionJugador;
    }
    else{
        cout<<"Ganó la maquina con la total cantidad de:" <<PuntuacionMaquina;
    }

}

void EscribirConEfecto(const string& texto, int velocidad) {
    for(char c : texto) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(velocidad));

    }
    cout << endl;
}

void ReglasDelJuego(){
    EscribirConEfecto("Next, i going to explain the rules of that game.", 15);
    EscribirConEfecto("The game consists of getting as many points as possible.", 15);
    EscribirConEfecto("If you select *1* and the opponent selects *0*, you will win 5 points and the opponent will win nothing, and viceverse",15);
    EscribirConEfecto("If you and your opponent both choose number *1*, you both get 1 point.",15);
    EscribirConEfecto("Finally, if both choose option *0*, they both win 3 points.",15);
    EscribirConEfecto("Whoever gets the most points wins.",15);
}




