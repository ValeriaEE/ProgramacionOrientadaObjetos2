#ifndef PERSONATD_H_
#define PERSONATD_H_

#include <string>
#include <iostream>

using namespace std;

class PersonaTD {
protected:
    string nombre;
    int edad;
    
public:
    // Constructores
    PersonaTD() : nombre(""), edad(0) {}
    PersonaTD(string nombre, int edad) : nombre(nombre), edad(edad) {}
    
    // Getters y setters 
    string getNombre() const { return nombre; }
    void setNombre(string nombrePersona) { nombre = nombrePersona; }
    
    int getEdad() const { return edad; }
    void setEdad(int edadPersona) { edad = edadPersona; }
    
    virtual void mostrarInfo() const {
    cout << "Nombre: " << nombre << ", Edad: " << edad << endl;}


    virtual string getRol() const {
        return "persona";
    }

    virtual bool puedeIrARegional() const {
        return false;
    }

    virtual ~PersonaTD() {}
};

#endif