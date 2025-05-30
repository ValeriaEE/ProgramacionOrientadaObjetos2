#ifndef PERSONATD_H_
#define PERSONATD_H_

#include <string>

using namespace std;

class PersonaTD {
private:
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
    
    
};

#endif