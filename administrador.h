#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_

#include <string>

using namespace std;

class Administrador {
private:
    string nombreUsuario;
    string contrasena; 

public:
    Administrador(string _usuario, string _contrasena) 
        : nombreUsuario(_usuario), contrasena(_contrasena) {}

    
};

#endif