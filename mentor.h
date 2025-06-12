#ifndef MENTOR_H_
#define MENTOR_H_

#include "personat.h"
#include <iostream>
#include <string>
#include <sstream>  // ✅necesario para usar stringstream


using namespace std;

class Mentor : public Personat {
private:
    int horasServicio;

public:
    // Constructores
    Mentor() : horasServicio(0) {}
    Mentor(int horasServicio) : horasServicio(horasServicio) {}
    Mentor(const string& nombre, int edad, int horasServicio)
        : Personat(nombre, edad), horasServicio(horasServicio) {}

    // Getters y setters
    int getHorasServicio() { return horasServicio; }
    void setHorasServicio(int horas) { horasServicio = horas; }

	string mostrarInfo();
	bool puedeIrARegional();
};

string Mentor::mostrarInfo(){
		stringstream aux; 
		aux << "Mentor: " << getNombre()
             << ", Edad: " << getEdad()
             << ", Horas de Servicio: " << horasServicio
             << endl;
			return aux.str();
	}

bool Mentor::puedeIrARegional() {
        return horasServicio >= 20;
    }


#endif
