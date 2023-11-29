#ifndef MANEJO_ARCHIVOS_H
#define MANEJO_ARCHIVOS_H

#include <string>
#include "JugadorConPuntuacion.h"
using namespace std;
class ManejoArchivos {
    private: 
        string nombreArchivo;
    
    public:
        ManejoArchivos(string nombre);
        void guardarDatos(const JugadorConPuntuacion& jugador);
        void cargarDatos(JugadorConPuntuacion& jugador);
        void guardarNombre(const string);
        void setNombreArchivo(const string& nombre);
        string getNombreArchivo() const;
};

#endif
