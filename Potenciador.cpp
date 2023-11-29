#include "Potenciador.h"
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

void Potenciador::setPotenciadoresDisponibles(const vector<string>& potenciadores) {
    potenciadoresDisponibles = potenciadores;
}

vector<string> Potenciador::getPotenciadoresDisponibles() const{
    return potenciadoresDisponibles;
}

void Potenciador::setPotenciadoresUtilizados(const vector<string>& potenciadores) {
    potenciadoresUtilizados = potenciadores;
}

vector<string> Potenciador::getPotenciadoresUtilizados() const{
    return potenciadoresUtilizados;
}
