#include "Canal.h"

Canal::Canal(int numero, std::string nombre) : numero(numero), nombre(nombre) {}

int Canal::getNumero() const {
    return numero;
}

std::string Canal::getNombre() const {
    return nombre;
}
