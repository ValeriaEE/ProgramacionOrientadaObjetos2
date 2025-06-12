#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "personat.h"
#include <iostream>
#include <string>
#include <sstream>  //  necesario para usar stringstream


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
    string getPuesto() { return puesto; }
    void setPuesto(string puestoenTD) { puesto = puestoenTD; }
    
	string getDepartamento() { return departamento; }
    void setDepartamento(string depProfesor) { departamento = depProfesor;}
    
	 string mostrarInfo();
	bool puedeIrARegional();
    

    
};

string Profesor::mostrarInfo(){
		stringstream aux; 
		aux << "Profesor: " << getNombre()
             << ", Edad: " << getEdad()
             << ", Puesto: " << puesto
             << ", Departamento: " << departamento
             << endl;
			return aux.str();
	}
bool Profesor::puedeIrARegional() {
        return true; 
    }

#endif