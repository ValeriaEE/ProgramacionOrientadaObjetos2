#include "PersonaTD.h"
#include "Estudiante.h"
#include "Mentor.h"
#include "Profesor.h"
#include <iostream>

using namespace std;
int main() {
	cout << "Inicio del programa..." << endl;

    PersonaTD* p1 = new Estudiante("Mateo", 16, 12,"Mecanica","Mesa");  // nombre, edad, puntosImpact
    //PersonaTD* p2 = new Mentor("Isaac", 22, 30);        // nombre, edad, horasServicio
    //PersonaTD* p3 = new Profesor("Lucía", 40);          // nombre, edad

    p1->mostrarInfo();  // Llama mostrarInfo() de Estudiante
    //p2->mostrarInfo();  // Llama mostrarInfo() de Mentor
    //p3->mostrarInfo();  // Llama mostrarInfo() de Profesor

    delete p1;
    //delete p2;
    //delete p3;

    return 0;
}
