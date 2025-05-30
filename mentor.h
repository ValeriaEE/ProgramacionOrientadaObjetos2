#ifndef MENTOR_H_
#define MENTOR_H_

#include "personaTD.h"
#include <iostream>
#include <string>

using namespace std; 
class Mentor : public PersonaTD {
private:
    int horasServicio; 	

public:
// Constructores
    Mentor() : horasServicio(0){}
    Mentor(int horasServicio) : horasServicio(horasServicio){}
    
    // Getters y setters 
    int getHorasServicio() { return horasServicio; }
    void setHorasServicio(int horas) { horasServicio = horas; }
    
	void mostrarInfo() const override {
        cout << "Mentor: " << getNombre()<< ", Horas Servicio: " << horasServicio << endl;
    }

    string getRol() const override {
        return "mentor";
    }

    bool puedeIrARegional() const override {
        return horasServicio >= 20;
    }
};

#endif