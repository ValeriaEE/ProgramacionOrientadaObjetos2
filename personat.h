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
    string getNombre() { return nombre; }
    void setNombre(string nombrePersona) { nombre = nombrePersona; }
    
    int getEdad() { return edad; }
    void setEdad(int edadPersona) { edad = edadPersona; }
    
	virtual string mostrarInfo()=0;
	
	virtual bool puedeIrARegional ()=0; 
	

    //virtual ~Personat() {}
};
#endif