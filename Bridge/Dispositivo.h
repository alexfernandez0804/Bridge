#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H

class Dispositivo {
public:
    virtual void encender() = 0;
    virtual void apagar() = 0;
    virtual void subirVolumen() = 0;
    virtual void bajarVolumen() = 0;
    virtual void cambiarCanal(int numero) = 0;
    virtual void mostrarEstado() = 0;
};

#endif  // DISPOSITIVO_H
