#include <iostream>
#include <cstdlib>
#include <ctime>



int main() {

    std::cout << "\t##### BIENVENIDO AL JUEGO DE ADIVINA TU NUMERO ##### \t\n";

    std::cout << "Tu tienes que escoger un numero del 1 al 100. " "tienes 11 oportunidades para adivinar el numero y todo depende del nivel que escojas. \n ";

int dificultad;

while(true){

    std::cout << "\t### Marca el nivel de la dificultad ###\n\t";

    std::cout << "\n(1 nivel facil!)\n";
    std::cout << "(2 nivel medio)\n";
    std::cout << "(3 nivel dificil)\n";
    std::cout << "(0 salir del juego!)\n";

    std::cout << "Ingresa el nivel: ";
    std::cin >> dificultad;

    srand(time(0));
    int numerosecreto = 1 + (rand() % 100 );
    int juegochoice;

    //dificultad facil

    if (dificultad == 1){
        std::cout << "\n tus oportunidades son 10, de 1 a 100";
    }

    int vidasjugador = 10;
    for (int i = 1; i <= 10; i++) {

        std::cout <<"\n\nIngresa el numero: ";
        std::cin >> juegochoice;
    if (juegochoice == numerosecreto){
        std::cout << "A GANADO!!" <<juegochoice << "Este es el numero secreto";
        


    }

    }

    break;


}


    return 0;
}