#ifndef JUEGO_DE_ADIVINANZA_H
#define JUEGO_DE_ADIVINANZA_H

#include <vector>
#include <string>
#include "jugador_con_puntuacion.h"
#include "potenciadores.h"
#include "manejo_archivos.h"

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