#include "potenciadores.h"
using namespace std;

Potenciador::Potenciador() {}

void Potenciador::agregarPotenciador(string potenciador) {
    potenciadoresDisponibles.push_back(potenciador);
}

void Potenciador::utilizarPotenciador(JugadorConPuntuacion& jugador, string potenciador) {
    if (potenciador == "DoblePuntuacion"){
        int puntuacionActual = jugador.getPuntuacion();
        jugador.setPuntuacion(puntuacionActual * 2);
    }
}