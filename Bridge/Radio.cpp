#include "Radio.h"

Radio::Radio() : volumen(50), canal(88.0f), estado(false) {}

void Radio::encender() {
    estado = true;
}

void Radio::apagar() {
    estado = false;
}

void Radio::subirVolumen() {
    if (volumen < 100) {
        volumen++;
    }
}

void Radio::bajarVolumen() {
    if (volumen > 0) {
        volumen--;
    }
}

void Radio::sintonizar(float frecuencia) {
    canal = frecuencia;
}

void Radio::mostrarEstado() {
    std::cout << "Estado de la radio: " << (estado ? "Encendida" : "Apagada") << std::endl;
    std::cout << "Volumen: " << volumen << std::endl;
    std::cout << "Canal actual: " << canal << std::endl;
}
