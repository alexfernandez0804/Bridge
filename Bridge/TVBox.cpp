#include "TVBox.h"

TVBox::TVBox() : volumen(50), servicioActual(""), pelicula("") {}

void TVBox::encender() {
    std::cout << "Encendiendo el TV Box..." << std::endl;
}

void TVBox::apagar() {
    std::cout << "Apagando el TV Box..." << std::endl;
}

void TVBox::subirVolumen() {
    if (volumen < 100) {
        volumen++;
    }
}

void TVBox::bajarVolumen() {
    if (volumen > 0) {
        volumen--;
    }
}

void TVBox::cambiarServicio(std::string servicio) {
    servicioActual = servicio;
}

void TVBox::reproducirPelicula(std::string pelicula) {
    this->pelicula = pelicula;
    std::cout << "Reproduciendo película: " << pelicula << std::endl;
}

void TVBox::mostrarEstado() {
    std::cout << "Estado del TV Box" << std::endl;
    std::cout << "Volumen: " << volumen << std::endl;
    std::cout << "Servicio actual: " << servicioActual << std::endl;
    std::cout << "Película en reproducción: " << (pelicula.empty() ? "Ninguna" : pelicula) << std::endl;
}
