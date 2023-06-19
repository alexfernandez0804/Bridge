#ifndef TVBOX_H
#define TVBOX_H

#include "Dispositivo.h"
#include <string>

class TVBox : public Dispositivo {
private:
    int volumen;
    std::string servicioActual;
    std::string pelicula;

public:
    TVBox();
    void encender() override;
    void apagar() override;
    void subirVolumen() override;
    void bajarVolumen() override;
    void cambiarCanal(int numero) override;
    void cambiarServicio(std::string servicio);
    void reproducirPelicula(std::string pelicula);
    void mostrarEstado() override;
};

#endif  // TVBOX_H
