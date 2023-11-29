#include "ManejoArchivos.h"
#include <fstream>
#include "Jugador.h"
using namespace std;

ManejoArchivos::ManejoArchivos(string nombre) : nombreArchivo(nombre) {}

void ManejoArchivos::guardarDatos(const JugadorConPuntuacion& jugador) {
    ofstream archivo("datos_jugador.txt");
    if (archivo.is_open()) {
        archivo << jugador.getNombre() << "\n";
        archivo << jugador.getPuntuacion() << "\n";
        archivo.close();
    }
}

void ManejoArchivos::cargarDatos(JugadorConPuntuacion& jugador) {
    ifstream archivo("datos_jugador.txt");
    if (archivo.is_open()) {
        string nombre;
        int puntuacion;
        archivo >> nombre >> puntuacion;
        jugador.setNombre(nombre);
        jugador.setPuntuacion(puntuacion);
        archivo.close();
    }
}

void ManejoArchivos::guardarNombre(string nombre){
    nombreArchivo = nombre;
}

void ManejoArchivos::setNombreArchivo(const string& nombre) {
    nombreArchivo = nombre;
}

string ManejoArchivos::getNombreArchivo() const {
    return nombreArchivo;
}
