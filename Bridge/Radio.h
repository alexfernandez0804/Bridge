#ifndef RADIO_H
#define RADIO_H

#include <iostream>

class Radio {
private:
    int volumen;
    float canal;
    bool estado;

public:
    Radio();
    void encender();
    void apagar();
    void subirVolumen();
    void bajarVolumen();
    void sintonizar(float frecuencia);
    void mostrarEstado();
};

#endif  // RADIO_H
