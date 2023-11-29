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

JugadorConPuntuacion::JugadorConPuntuacion(const string nombre, int puntuacion) : Jugador(nombre), puntuacionActual(puntuacion) {}

int JugadorConPuntuacion::getPuntuacion() const {
    return puntuacionActual;
}

void JugadorConPuntuacion::setPuntuacion(int nuevaPuntuacion) {
    puntuacionActual = nuevaPuntuacion;
}


void JugadorConPuntuacion::sumarPuntos(int puntos) {
    this -> puntuacionActual += puntos;

}
