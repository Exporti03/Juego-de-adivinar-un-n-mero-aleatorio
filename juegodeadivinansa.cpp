#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "\t##### BIENVENIDO AL JUEGO DE ADIVINA TU NUMERO #####\n\n";
    std::cout << "Tienes que adivinar un numero del 1 al 100.\n"
              << "Las oportunidades dependen del nivel que escojas.\n\n";

    int dificultad;
    
    while(true) {
        std::cout << "\t### Marca el nivel de dificultad ###\n\n";
        std::cout << "(1) Nivel facil  - 10 intentos\n";
        std::cout << "(2) Nivel medio  - 7 intentos\n";
        std::cout << "(3) Nivel dificil - 5 intentos\n";
        std::cout << "(0) Salir del juego\n\n";

        std::cout << "Ingresa el nivel: ";
        std::cin >> dificultad;

        if (dificultad == 0) {
            std::cout << "¡Gracias por jugar!\n";
            break;
        }

        if (dificultad < 0 || dificultad > 3) {
            std::cout << "Nivel invalido. Por favor, elige un nivel valido.\n\n";
            continue;
        }

        // Inicializar número aleatorio
        srand(time(0));
        int numerosecreto = 1 + (rand() % 100);
        int intentos;

        // Establecer número de intentos según dificultad
        switch(dificultad) {
            case 1: intentos = 10; break;
            case 2: intentos = 7; break;
            case 3: intentos = 5; break;
        }

        std::cout << "\nTienes " << intentos << " intentos para adivinar el numero.\n";

        // Bucle principal del juego
        bool adivinado = false;
        for (int i = 1; i <= intentos && !adivinado; i++) {
            int numeroUsuario;
            std::cout << "\nIntento " << i << "/" << intentos << ". Ingresa un numero: ";
            std::cin >> numeroUsuario;

            if (numeroUsuario == numerosecreto) {
                std::cout << "\n¡FELICITACIONES! ¡Has adivinado el numero " << numerosecreto << "!\n";
                adivinado = true;
            } else {
                if (numeroUsuario < numerosecreto) {
                    std::cout << "El numero es mayor que " << numeroUsuario << "\n";
                } else {
                    std::cout << "El numero es menor que " << numeroUsuario << "\n";
                }

                if (i < intentos) {
                    std::cout << "Te quedan " << (intentos - i) << " intentos.\n";
                }
            }
        }

        if (!adivinado) {
            std::cout << "\nSe acabaron los intentos. El numero era: " << numerosecreto << "\n";
        }

        std::cout << "\n¿Quieres jugar otra vez?\n\n";
    }

    return 0;
}