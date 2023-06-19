#include "TV.h"
#include <iostream>

TV::TV() : volumen(100), estado(false), marca(""), currentChannel(nullptr) {}

void TV::encender() {
    estado = true;
}

void TV::apagar() {
    estado = false;
}

void TV::subirVolumen() {
    if (volumen < 1000) {
        volumen += 100;
    }
}

void TV::bajarVolumen() {
    if (volumen > 100) {
        volumen -= 100;
    }
}

void TV::cambiarCanal(int numero) {
    // Implementa la lógica para cambiar de canal en la TV
}

void TV::mostrarEstado() {
    std::cout << "Estado de la TV: " << (estado ? "Encendido" : "Apagado") << std::endl;
    std::cout << "Volumen: " << volumen << std::endl;
    if (currentChannel != nullptr) {
        std::cout << "Canal actual: " << currentChannel->getNumero() << " - " << currentChannel->getNombre() << std::endl;
    }
    else {
        std::cout << "No se ha seleccionado ningún canal." << std::endl;
    }
}
