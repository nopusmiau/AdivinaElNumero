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
        int usosPotenciadores;
        vector<int> historialIntentos;
        JugadorConPuntuacion jugador;
        Potenciador potenciador;
        ManejoArchivos manejoArchivos;

    public:
        JuegoDeAdivinanza(JugadorConPuntuacion jugador);
        void adivinar(int numero);
        bool juegoTerminado();
        void reiniciarJuego();
        int obtenerNumeroSecreto() const;
        string mensaje = "Ya has alcanzado el limite de uso de potenciadores";
        bool sePuedenUsarPotenciadores() const {
            return usosPotenciadores < 3;
        }
        void usarPotenciador() {
            if (sePuedenUsarPotenciadores()) {
                usosPotenciadores ++;
            } else {
                mensaje;
            }
        }
        void guardarNombreJugador();
        int imprimirPuntuacion() const;
        
};

#endif
