#ifndef JUGADOR_CON_PUNTUACION_H
#define JUGADOR_CON_PUNTUACION_H

#include "Jugador.h"
using namespace std;
class JugadorConPuntuacion : public Jugador {
    private:
        int puntuacion;
    
    public:
        JugadorConPuntuacion(string nombre);
        int obtenerPuntuacion() const override;
        int getPuntuacion() const;
        void setPuntuacion(int nuevaPuntuacion);
};

#endif