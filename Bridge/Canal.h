#ifndef CANAL_H
#define CANAL_H

#include <string>

class Canal {
private:
    int numero;
    std::string nombre;

public:
    Canal(int numero, std::string nombre);
    int getNumero() const;
    std::string getNombre() const;
};

#endif  // CANAL_H
