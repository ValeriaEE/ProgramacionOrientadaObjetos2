#ifndef PERSONAT_H_
#define PERSONAT_H_

#include <string>
#include <iostream>

using namespace std;

// Clase abstracta 
//Representa a cualquier persona dentro del equipo 
class Personat {
protected:
    string nombre; //Nombre de la persona
    int edad; //Edad de la persona 
    
public:
    // Constructores
    Personat() : nombre(""), edad(0) {}
    Personat(string nombre, int edad) : nombre(nombre), edad(edad) {}
    
    // Getters y setters 
    string getNombre() { return nombre; }
    void setNombre(string nombrePersona) { nombre = nombrePersona; }
    
    int getEdad() { return edad; }
    void setEdad(int edadPersona) { edad = edadPersona; }
    
	/*Metodos virtuales que convierte a personat en una clase abstracta
no tiene implementacion aqui sino en las clases hijas 
Permite el polimorfismo */	
	virtual string mostrarInfo()=0;
	virtual bool puedeIrARegional ()=0; 
	

    virtual ~Personat() {} //Destructor
};
#endif