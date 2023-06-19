#ifndef SERVICIO_H
#define SERVICIO_H

#include <iostream>
#include <vector>
#include "TVBox.h"

class Servicio {
private:
    std::string nombre;
    std::vector<TVBox> listaTVBox;

public:
    Servicio(std::string nombre);
    void agregarTVBox(TVBox tvBox);
    void mostrarPeliculas();
};

#endif  // SERVICIO_H
