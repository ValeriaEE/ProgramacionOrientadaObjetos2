#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "personaTD.h"
#include <iostream>
#include <string>

using namespace std; 
class Profesor: public PersonaTD {
private:
    string puesto;
	string departamento;  	

public:
// Constructores
    Profesor() : puesto(""), departamento("") {}
    Profesor(string puesto, string departamento) : puesto(puesto), departamento(departamento) {}
    
    // Getters y setters 
    string getPuesto() const { return puesto; }
    void setPuesto(int puestoenTD) { puesto = puestoenTD; }
    
	string getDepartamento() const { return departamento; }
    void setDepartamento(string depProfesor) { departamento = depProfesor;}
    
	 void mostrarInfo() const override {
        cout << "Profesor: " << getNombre() << endl;
    }

    string getRol() const override {
        return "profesor";
    }

    bool puedeIrARegional() const override {
        return true; // Siempre puede ir
    }
};

#endif