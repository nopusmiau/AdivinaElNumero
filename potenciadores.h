#ifndef POTENCIADORES_H
#define POTENCIADORES_H

#include <vector>
#include <string>
#include "jugador_con_puntuacion.h"
using namespace std;
class Potenciador {
    private:
        vector<string> potenciadoresDisponibles;
        vector<string> potenciadoresUtilizados;

    public:
        Potenciador();
        void agregarPotenciador(string potenciador);
        void utilizarPotenciador(JugadorConPuntuacion& jugador, string potenciador);
};

#endif