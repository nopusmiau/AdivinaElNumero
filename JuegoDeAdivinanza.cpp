#include "JuegoDeAdivinanza.h"
#include "JugadorConPuntuacion.h"
#include <time.h>
#include <iostream>
using namespace std;

JuegoDeAdivinanza::JuegoDeAdivinanza(JugadorConPuntuacion jugador) : jugador(jugador), numeroSecreto(0), intentosRestantes(5), manejoArchivos("datos_jugador.txt") {
    srand(time(nullptr));
    numeroSecreto = rand () % 25 + 1;
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
    return (intentosRestantes <= 0);
    imprimirPuntuacion();
}


void JuegoDeAdivinanza::reiniciarJuego() {
    srand(time(nullptr));
    numeroSecreto = rand() % 25 + 1;

    intentosRestantes = 5;
    historialIntentos.clear();
}

int JuegoDeAdivinanza::obtenerNumeroSecreto() const {
    return numeroSecreto;
}

void JuegoDeAdivinanza::guardarNombreJugador() {
    string nombreJugador = jugador.getNombre();
    manejoArchivos.guardarNombre(nombreJugador);
}

int JuegoDeAdivinanza::imprimirPuntuacion() const {
    return jugador.getPuntuacion();
}
