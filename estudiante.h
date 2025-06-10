#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_


#include "personat.h"
#include <iostream>
#include <string>

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
    int getPuntosImpact() const { return puntosImpact; }
    void setPuntosImpact(int numPI) { puntosImpact = numPI; }

    string getArea() const { return area; }
    void setArea(string areaEstudiante) { area = areaEstudiante; }

    string getTipoColab() const { return tipoColab; }
    void setTipoColab(string tipo) { tipoColab = tipo; }

    void mostrarInfo() const override {
        cout << "Estudiante: " << getNombre()
             << ", Edad: " << getEdad()
             << ", Puntos Impact: " << puntosImpact
             << ", Área: " << area
             << ", Tipo de Colaborador: " << tipoColab
             << endl;
    }


    bool puedeIrARegional() const override {
        return puntosImpact >= 30;
    }
};

#endif
