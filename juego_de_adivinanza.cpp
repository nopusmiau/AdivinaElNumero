#include "juego_de_adivinanza.h"
#include <time.h>
#include <iostream>
using namespace std;

JuegoDeAdivinanza::JuegoDeAdivinanza(JugadorConPuntuacion jugador) : jugador(jugador), numeroSecreto(0), intentosRestantes(5), manejoArchivos("datos_jugador.txt") {
    srand(time(nullptr));
    numeroSecreto = rand () % 100 + 1;
    historialIntentos.clear();
}

void JuegoDeAdivinanza::adivinar(int numero) {
    historialIntentos.push_back(numero);
    if (numero == numeroSecreto) {
        cout << "¡Has adivinado el numero secreto!" << endl;
    } else {
        cout << "Numero incorrecto, ¡Sigue intentandolo!" << endl;
        intentosRestantes--;
    }
}

bool JuegoDeAdivinanza::juegoTerminado() {
    return (intentosRestantes <= 0 || ganador());
}

bool JuegoDeAdivinanza::ganador() {
    return (numeroSecreto == jugador.getPuntuacion());
}

void JuegoDeAdivinanza::reiniciarJuego() {
    srand(time(nullptr));
    numeroSecreto = rand() % 100 + 1;

    intentosRestantes = 5;
    historialIntentos.clear();
}

int JuegoDeAdivinanza::obtenerNumeroSecreto() const {
    return numeroSecreto;
}