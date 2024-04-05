#include <iostream>
#include "Primitiva.h"

using namespace std;

int main() {
    // Inicia números aleatorios
    srand(time(0));

    // Array para almacenar los números de la primitiva
    int primitiva[6];

    // Generar números aleatorios únicos para la primitiva
    PRIMITIVA::generarNumerosPrimitiva(primitiva, 6);

    // Generar el reintegro
    int reintegro = PRIMITIVA::generarReintegro(); 

    // Muestra los números de la Primitiva y el reintegro
    std::cout << "\nReintegro: " << reintegro << std::endl;

    return 0;
}

