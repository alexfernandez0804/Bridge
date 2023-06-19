#ifndef TV_H
#define TV_H

#include <iostream>
#include <vector>
#include "Canal.h"

class TV {
private:
    int volumen;
    std::vector<Canal*> canales;
    bool estado;
    std::string marca;
    Canal* currentChannel;

public:
    TV();
    void encender();
    void apagar();
    void subirVolumen();
    void bajarVolumen();
    void cambiarCanal(Canal* canal);
    void mostrarEstado();
};

#endif  // TV_H
