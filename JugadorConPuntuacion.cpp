#include "JugadorConPuntuacion.h"
using namespace std;

Jugador::Jugador(string nombre) {
    this-> nombre = nombre;
}

string Jugador::getNombre() const {
    return nombre;
}

void Jugador::setNombre(string nuevoNombre) {
    nombre = nuevoNombre;
}

JugadorConPuntuacion::JugadorConPuntuacion(string nombre) : Jugador(nombre), puntuacion(0) {}

int JugadorConPuntuacion::obtenerPuntuacion() const {
    return puntuacion;
}

int JugadorConPuntuacion::getPuntuacion() const {
    return puntuacion;
}

void JugadorConPuntuacion::setPuntuacion(int nuevaPuntuacion) {
    puntuacion = nuevaPuntuacion;
}