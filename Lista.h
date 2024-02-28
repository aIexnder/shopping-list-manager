#ifndef LISTA_H
#define LISTA_H

#include "Elemento.h"

class Lista
{
    public:
        Lista();
        void Agregar(Elemento* elemento);
        Elemento* GetPrimer() { return _primer; }
        bool Eliminar(int indice);

    private:
        Elemento* _primer;
        Elemento* _ultimo;
};
#endif
