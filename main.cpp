#include "Lista.h"
#include <iostream>
#include <string>

using namespace std;
Lista* lista = new Lista();


void Listar()
{
    cout << endl << endl;
    int i = 1;
    Elemento* e = lista->GetPrimer();
    while(e != NULL)
    {
        cout << i << "- " << e->GetNombre() << " " << e->GetCantidad() << endl;
        e = e->GetSiguiente();
        i++;
    }
    if(i == 1)
    {
        cout << endl << "** Lista vacía **" << endl;
    }
    cout << endl << endl;
}

void Introducir()
{
    string nombre;
    int cantidad;

    cout << "Introducir el nombre del artículo: ";
    cin >> nombre;
    cout << "Introduzca la cantidad del nuevo artículo: ";
    cin >> cantidad;
    Elemento* elemento = new Elemento(nombre, cantidad);
    lista->Agregar(elemento);
    cout << "-- Artículo Agregado. Presione ENTER para regresar al menú principal--" << endl;
    getline(cin, nombre);
    cout << endl;
}

void Eliminar()
{
    int indice = 0;
    Listar();
    cout << "Elija el artículo a eliminar => ";
    cin >> indice;
    lista->Eliminar(indice - 1);
    cout << endl;
    Listar();
    cout << endl;
}

void MostrarMenu()
{
    int opcion = 0;
    do
    {        
        cout << "1- Listar artículos" << endl;
        cout << "2- Introducir artículo" << endl;
        cout << "3- Eliminar Artículo" << endl;
        cout << "4- Salir" << endl;
        cout << "Elija una opción => ";
        cin >> opcion;
        
        switch(opcion)
        {
            case 1:
                Listar();
            break;
            case 2:
                Introducir();
            break;
            case 3:
                Eliminar();
            break;
            case 4:
                exit(0);
            break;
            default:
                cout << "Opción inválida" << endl;
            break;
        }
    }while(opcion != 4);
}

int main()
{
    MostrarMenu();
    return 0;
}
