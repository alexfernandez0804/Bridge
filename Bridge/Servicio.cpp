#include "Servicio.h"

Servicio::Servicio(std::string nombre) : nombre(nombre) {}

void Servicio::agregarTVBox(TVBox tvBox) {
    listaTVBox.push_back(tvBox);
}

void Servicio::mostrarPeliculas() {
    std::cout << "Pel�culas disponibles en el servicio " << nombre << ":" << std::endl;
    for (const TVBox& tvBox : listaTVBox) {
        std::cout << "- " << tvBox.getPelicula() << std::endl;
    }
}
