#include <iostream>
#include "JugadorConPuntuacion.cpp"
#include "ManejoArchivos.cpp"
#include "JuegoDeAdivinanza.cpp"
#include "Potenciador.cpp"
using namespace std;

int main(){
    string nombreJugador;
    cout << "Ingrese su nombre: ";
    std::cin >> nombreJugador;
    JugadorConPuntuacion jugador(nombreJugador);
    Potenciador potenciador;
    ManejoArchivos manejoArchivos("datos_jugador.txt");
    JuegoDeAdivinanza juego(jugador);

    manejoArchivos.guardarDatos(nombreJugador);

    char respuesta;
    char doblePuntos;
    bool continuar = true;
    const int puntosPorAdivinanzaExitosa = 10;

    while (continuar) {
        cout <<"Bienvenido al juego de adivinanzas" << endl;
        cout <<"Intenta adivinar el numero secreto entre 1 y 25" << endl;

        while (!juego.juegoTerminado()) {
            int intento;
            cout << "Introduce tu intento: ";
            std::cin >> intento;

            juego.adivinar(intento);

            if (intento == juego.obtenerNumeroSecreto()) {
                cout << "Felicidades. Has adivinado el numero secreto" << endl;
                jugador.sumarPuntos(puntosPorAdivinanzaExitosa);
                cout << "¿Quieres doblar los puntos? (s/n)";
                std::cin >> doblePuntos; 
                
                if (doblePuntos != 's' || doblePuntos != 'S'){
                    cout<< "Jugador: "  << jugador.getNombre() << endl;
                    cout<< "Puntuacion nueva: "<< jugador.getPuntuacion() << endl;
                    break;
                } else {
                    if (juego.sePuedenUsarPotenciadores()) {
                        juego.usarPotenciador();
                        potenciador.utilizarPotenciador(jugador, "DoblePuntuacion");
                    }
                    break;
                }

            }

            if (juego.juegoTerminado()) {
                cout << "Agotaste tus intentos. El numero secreto era: " << juego.obtenerNumeroSecreto() << endl;
                cout <<"Jugador: " << jugador.getNombre() << endl;
                cout <<"Puntuacion actual: " << jugador.getPuntuacion() << endl;
                break;
            }
            
            
        }

        cout << "¿Quieres jugar de nuevo? (s/n): ";
        std::cin >> respuesta;

        if (respuesta != 's' && respuesta != 'S'){
            cout << "Puntuacion final: " << jugador.getPuntuacion() << endl;
            manejoArchivos.guardarDatos(jugador);
            continuar = false;
        } else {
            juego.reiniciarJuego();
        }
    }
    
    return 0;
}
