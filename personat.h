#ifndef PERSONAT_H_
#define PERSONAT_H_

#include <string>
#include <iostream>

using namespace std;

class Personat {
protected:
    string nombre;
    int edad;
    
public:
    // Constructores
    Personat() : nombre(""), edad(0) {}
    Personat(string nombre, int edad) : nombre(nombre), edad(edad) {}
    
    // Getters y setters 
    string getNombre() const { return nombre; }
    void setNombre(string nombrePersona) { nombre = nombrePersona; }
    
    int getEdad() const { return edad; }
    void setEdad(int edadPersona) { edad = edadPersona; }
    
    virtual void mostrarInfo() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
	
	virtual bool puedeIrARegional() const {
        return false;
    }
	

    virtual ~Personat() {}
};

#endif // PERSONAT_H_