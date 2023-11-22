#include <iostream>
#include "jugador_con_puntuacion.h"
#include "jugador.h"
#include "manejo_archivos.h"
#include "juego_de_adivinanza.h"
#include "potenciadores.h"
using namespace std;

int main(){
    JugadorConPuntuacion jugador("NombreJugador");
    Potenciador potenciador;
    ManejoArchivos manejoArchivos("datos_jugador.txt");
    JuegoDeAdivinanza juego(jugador);

    char respuesta;
    bool continuar = true;

    while (continuar) {
        cout <<"Bienvenido al juego de adivinanzas" << endl;
        cout <<"Intenta adivinar el numero secreto entre 1 y 100" << endl;

        while (!juego.juegoTerminado()) {
            int intento;
            cout << "Introduce tu intento: ";
            cin >> intento;

            juego.adivinar(intento);

            if (juego.ganador()) {
                cout << "¡Felicidades! Has adivinado el numero secreto" << endl;
                break;
            }

            if (juego.juegoTerminado()) {
                cout << "¡Agotaste tus intentos! El numero secreto era: " << juego.obtenerNumeroSecreto() << endl;
                break;
            }
        }

        cout << "¿Quieres jugar de nuevo? (s/n): ";
        cin >> respuesta;

        if (respuesta != 's' && respuesta != 'S'){
            continuar = false;
        } else {
            juego.reiniciarJuego();
        }
    }
    
    return 0;
}
