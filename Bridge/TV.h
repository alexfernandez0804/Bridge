#ifndef TV_H
#define TV_H

#include "Dispositivo.h"
#include "Canal.h"
#include <vector>

class TV : public Dispositivo {
private:
    int volumen;
    std::vector<Canal*> canales;
    bool estado;
    std::string marca;
    Canal* currentChannel;

public:
    TV();
    void encender() override;
    void apagar() override;
    void subirVolumen() override;
    void bajarVolumen() override;
    void cambiarCanal(int numero) override;
    void mostrarEstado() override;
};

#endif  // TV_H
