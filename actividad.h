#ifndef ACTIVIDAD_H_
#define ACTIVIDAD_H_

#include <string>

using namespace std;

class Actividad {
private:
    string nombre;
    int numPuntos;
	string lugar; 
	int horas; 
  
public:
	Actividad() : nombre(""), numPuntos(0), horas(0), lugar("") {}
    Actividad(string nombre, int numPuntos, int horas, string lugar)
        : nombre(nombre), numPuntos(numPuntos), horas(horas), lugar(lugar) {}
		
    // Getters y setters
    string getNombre() const { return nombre; }
    void setNombre(string nombreAct) { nombre = nombreAct; }
    
    int getNumPuntos() const { return numPuntos; }
    void setNumPuntos(int npAct) { numPuntos = npAct; }
    
    string getLugar() const { return lugar; }
    void setLugar(string lugarAct) { lugar = lugarAct; }
    
    int getHoras() const { return horas; }
    void setHoras(int horasAct) { horas = horasAct; }
};

#endif