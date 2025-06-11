#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "personat.h"
#include <iostream>
#include <string>

using namespace std; 
class Profesor: public Personat {
private:
    string puesto;
	string departamento;  	

public:
// Constructores
    Profesor() : puesto(""), departamento("") {}
    Profesor(string nombre, int edad, string puesto, string departamento)
        : Personat(nombre, edad), puesto(puesto), departamento(departamento) {}
    
    // Getters y setters 
    string getPuesto() const { return puesto; }
    void setPuesto(string puestoenTD) { puesto = puestoenTD; }
    
	string getDepartamento() const { return departamento; }
    void setDepartamento(string depProfesor) { departamento = depProfesor;}
    
	 void mostrarInfo() const override {
        cout << "Profesor: " << getNombre() << endl;
    }

    bool puedeIrARegional() const override {
        return true; // Siempre puede ir
    }
};

#endif