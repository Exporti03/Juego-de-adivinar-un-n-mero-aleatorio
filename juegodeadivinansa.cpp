#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {

    int numeroaleatorio;

    numeroaleatorio = (rand() % (100-1) + 1);

    std::cout << "muestran: \n" <<numeroaleatorio;
    

    return 0;
}