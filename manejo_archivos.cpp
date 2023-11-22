#include "manejo_archivos.h"
#include <fstream>
using namespace std;

ManejoArchivos::ManejoArchivos(string nombre) : nombreArchivo(nombre) {}

void ManejoArchivos::guardarDatos(const JugadorConPuntuacion& jugador) {
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        archivo << jugador.getNombre() << "\n";
        archivo << jugador.getPuntuacion() << "\n";
        archivo.close();
    }
}

void ManejoArchivos::cargarDatos(JugadorConPuntuacion& jugador) {
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        string nombre;
        int puntuacion;
        archivo >> nombre >> puntuacion;
        jugador.setNombre(nombre);
        jugador.setPuntuacion(puntuacion);
        archivo.close();
    }
}