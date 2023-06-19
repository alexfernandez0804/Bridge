#ifndef RADIO_H
#define RADIO_H

#include "Dispositivo.h"

class Radio : public Dispositivo {
private:
    int volumen;
    float canal;
    bool estado;

public:
    Radio();
    void encender() override;
    void apagar() override;
    void subirVolumen() override;
    void bajarVolumen() override;
    void cambiarCanal(int numero) override;
    void mostrarEstado() override;
};

#endif  // RADIO_H
