# ifndef JUGADOR_H
# define JUGADOR_H

# include <string>
using namespace std;
class Jugador {
    protected: 
        string nombre;
    
    public:
        Jugador(string nombre);
        string getNombre() const;
        void setNombre(string nuevoNombre);
        virtual int obtenerPuntuacion() const = 0;
};

#endif // JUGADOR_H
