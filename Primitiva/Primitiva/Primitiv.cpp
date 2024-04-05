#include "Primitiva.h"
#include <iostream>

void PRIMITIVA::generarNumerosPrimitiva(int primitiva[], int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        bool repetido;
        int numero;
        do {
            repetido = false;
            numero = rand() % 49 + 1; // Generar número aleatorio entre 1 y 49

            // Comprobar si el número generado ya está en la primitiva
            for (int j = 0; j < i; ++j) {
                if (primitiva[j] == numero) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido); // Repetir hasta que se genere un número único
        primitiva[i] = numero;
    }
    for (int i = 0; i < 6; ++i) {
        std::cout << primitiva[i] << " ";
    }
}

int PRIMITIVA::generarReintegro() {
    return rand() % 10 + 1; // Generar número aleatorio entre 1 y 10
}
