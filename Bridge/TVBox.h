#ifndef TVBOX_H
#define TVBOX_H

#include <iostream>
#include <string>

class TVBox {
private:
    int volumen;
    std::string servicioActual;
    std::string pelicula;

public:
    TVBox();
    void encender();
    void apagar();
    void subirVolumen();
    void bajarVolumen();
    void cambiarServicio(std::string servicio);
    void reproducirPelicula(std::string pelicula);
    void mostrarEstado();
    std::string getPelicula() const { return pelicula; }
};

#endif  // TVBOX_H
