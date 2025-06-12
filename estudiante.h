#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include "personat.h"
#include <iostream>
#include <string>
#include <sstream>  //  necesario para usar stringstream


using namespace std;

class Estudiante : public Personat {
private:
    int puntosImpact;
    string area;
    string tipoColab;

public:
    // Constructores
    Estudiante() : Personat(), puntosImpact(0), area(""), tipoColab("") {}

    Estudiante(string nombre, int edad, int puntosImpact, string area, string tipoColab)
        : Personat(nombre, edad), puntosImpact(puntosImpact), area(area), tipoColab(tipoColab) {}

    // Getters y setters
    int getPuntosImpact() { return puntosImpact; }
    void setPuntosImpact(int numPI) { puntosImpact = numPI; }

    string getArea() { return area; }
    void setArea(string areaEstudiante) { area = areaEstudiante; }

    string getTipoColab() { return tipoColab; }
    void setTipoColab(string tipo) { tipoColab = tipo; }

	string mostrarInfo();
	bool puedeIrARegional();
    

    
};

string Estudiante::mostrarInfo(){
		stringstream aux; 
		aux << "Estudiante: " << getNombre() << endl;
        aux << ", Edad: " << getEdad() << endl;
        aux << ", Puntos Impact: " << puntosImpact << endl;
        aux << ", Área: " << area << endl;
        aux << ", Tipo de Colaborador: " << tipoColab << endl;
			return aux.str();
	}
bool Estudiante::puedeIrARegional() {
        return puntosImpact >= 30;
    }
#endif
