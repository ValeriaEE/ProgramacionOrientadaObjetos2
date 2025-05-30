#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include "personaTD.h"
#include <iostream>
#include <string>

using namespace std; 
class Estudiante : public PersonaTD {
private:
    int puntosImpact;
	string area;  	

public:
// Constructores
    Estudiante() : puntosImpact(0), area("") {}
    Estudiante(int puntosImpact, string area) : puntosImpact(puntosImpact), area(area) {}
    
    // Getters y setters 
    int getPuntosImpact() const { return puntosImpact; }
    void setPuntosImpact(int numPI) { puntosImpact = numPI; }
    
	string getArea() const { return area; }
    void setArea(string areaEstudiante) { area = areaEstudiante;}
    
};

#endif