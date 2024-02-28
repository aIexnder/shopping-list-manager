#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

class Elemento
{
    public:
        Elemento(std::string nombre, int cantidad);
        void SetNombre(std::string nombre) { _nombre = nombre; }
        std::string GetNombre(){ return _nombre; }
        void SetSiguiente(Elemento* siguiente) { _siguiente = siguiente; }
        Elemento* GetSiguiente() { return _siguiente; }
        int GetCantidad() { return _cantidad; }
        void SetCantidad(int cantidad) { _cantidad = cantidad; }

    private:
        std::string _nombre;
        int _cantidad;
        Elemento* _siguiente;
};
#endif
