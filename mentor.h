#ifndef MENTOR_H_
#define MENTOR_H_

#include "personat.h"
#include <iostream>
#include <string>

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

    void mostrarInfo() const override {
        cout << "Mentor: " << getNombre() << ", Horas Servicio: " << horasServicio << endl;
    }

    bool puedeIrARegional() const override {
        return horasServicio >= 20;
    }
};

#endif
