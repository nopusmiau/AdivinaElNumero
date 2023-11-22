#include "Jugador.h"
using namespace std;

Jugador::Jugador(string nombre) : nombre(nombre) {}

string Jugador::getNombre() const{
    return nombre;
}

void Jugador::setNombre(string nuevoNombre) {
    nombre = nuevoNombre;
}