#ifndef JUEGO_DE_ADIVINANZA_H
#define JUEGO_DE_ADIVINANZA_H

#include <vector>
#include <string>
#include "JugadorConPuntuacion.h"
#include "Potenciador.h"
#include "ManejoArchivos.h"

class JuegoDeAdivinanza {
    private:
        int numeroSecreto;
        int intentosRestantes;
        vector<int> historialIntentos;
        JugadorConPuntuacion jugador;
        Potenciador potenciador;
        ManejoArchivos manejoArchivos;

    public:
        JuegoDeAdivinanza(JugadorConPuntuacion jugador);
        void adivinar(int numero);
        bool juegoTerminado();
        bool ganador();
        void reiniciarJuego();
        int obtenerNumeroSecreto() const;
};

#endif