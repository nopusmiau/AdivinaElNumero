#ifndef JUGADOR_CON_PUNTUACION_H
#define JUGADOR_CON_PUNTUACION_H

#include "Jugador.h"
using namespace std;
class JugadorConPuntuacion : public Jugador {
    private:
        int puntuacionActual;
    
    public:
        JugadorConPuntuacion(const string nombre, int puntuacion = 0);

        int getPuntuacion() const;
        void setPuntuacion(int nuevaPuntuacion);
        int obtenerPuntuacion() const override {
            return getPuntuacion();
        }
        void sumarPuntos(int puntos);
        
};

#endif
