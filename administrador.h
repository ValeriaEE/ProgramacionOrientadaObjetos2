#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_

#include <iostream>
//Se incluye las clases que se van a utilizar 
#include "estudiante.h"
#include "mentor.h"
#include "profesor.h"
#include "personat.h"
#include "actividad.h"


using namespace std;

//Se define el numero maximo de integrantes por categoria 
const int MAX = 100;

class Administrador {
private:
	
    Estudiante* estudiantes[MAX];
    Mentor* mentores[MAX];
    Profesor* profesores[MAX];

    int numEstudiantes = 0;
    int numMentores = 0;
    int numProfesores = 0;

public:

    ~Administrador();  //destructor

    void registrarActividadParaEstudiante(Estudiante* e, Actividad &a);
    void registrarActividadParaMentor(Mentor* m, Actividad &a);
    void registrarActividadEstudiante(int indice, Actividad &a);
    void registrarActividadMentor(int indice, Actividad &a);

    void agregarEstudiante( Estudiante* e);
    void agregarMentor( Mentor* m);
    void agregarProfesor(Profesor* p);

    void mostrarEstudiantes();
    void mostrarMentores();
    void mostrarProfesores();

    void generarListaAsistentes();
};

// Implementación de métodos
Administrador::~Administrador() {
    for (int i = 0; i < numEstudiantes; ++i) delete estudiantes[i];
    for (int i = 0; i < numMentores; ++i) delete mentores[i];
    for (int i = 0; i < numProfesores; ++i) delete profesores[i];
}//destructores 

void Administrador::agregarEstudiante( Estudiante* e) {
    if (numEstudiantes < MAX)
        estudiantes[numEstudiantes++] = e;
}

void Administrador::agregarMentor(Mentor* m) {
    if (numMentores < MAX)
        mentores[numMentores++] = m;
}

void Administrador::agregarProfesor(Profesor* p) {
    if (numProfesores < MAX)
        profesores[numProfesores++] = p;
}

void Administrador::mostrarEstudiantes() {
    cout << "\n--- Estudiantes ---\n";
    for (int i = 0; i < numEstudiantes; ++i)
        cout << estudiantes[i]->mostrarInfo() <<endl;
}

void Administrador::mostrarMentores() {
    cout << "\n--- Mentores ---\n";
    for (int i = 0; i < numMentores; ++i)
        cout << mentores[i]->mostrarInfo() <<endl;
}

void Administrador::mostrarProfesores() {
    cout << "\n--- Profesores ---\n";
    for (int i = 0; i < numProfesores; ++i)
        cout << profesores[i]->mostrarInfo() <<endl;
}

void Administrador::generarListaAsistentes() {
    cout << "\n--- Lista de asistentes al regional ---\n";

    int estudiantesValidos = 0;
    for (int i = 0; i < numEstudiantes; ++i)
        if (estudiantes[i]->puedeIrARegional())
            estudiantesValidos++;

    int mentoresValidos = 0;
    for (int i = 0; i < numMentores; ++i)
        if (mentores[i]->puedeIrARegional())
            mentoresValidos++;

    int necesariosProfes = (estudiantesValidos + 14) / 15;

    if (numProfesores < necesariosProfes) {
        cout << "Faltan profesores. Se requieren al menos "
             << necesariosProfes << " profesores, pero solo hay "
             << numProfesores << ".\n";
        return;
    }

    cout << "\nEstudiantes válidos:\n";
    for (int i = 0; i < numEstudiantes; ++i)
        if (estudiantes[i]->puedeIrARegional())
            cout << estudiantes[i]->mostrarInfo() << endl;

    cout << "\nMentores válidos:\n";
    for (int i = 0; i < numMentores; ++i)
        if (mentores[i]->puedeIrARegional())
            cout << mentores[i]->mostrarInfo()<< endl;

    cout << "\nProfesores acompañantes:\n";
    for (int i = 0; i < necesariosProfes; ++i)
        cout << profesores[i]-> mostrarInfo()<< endl;
}

// Métodos de registro de actividad

void Administrador::registrarActividadParaEstudiante(Estudiante* e,  Actividad &a) {
    e->setPuntosImpact(e->getPuntosImpact() + a.getNumPuntos());
}

void Administrador::registrarActividadParaMentor(Mentor* m,  Actividad &a) {
    m->setHorasServicio(m->getHorasServicio() + a.getHoras());
}

void Administrador::registrarActividadEstudiante(int indice,  Actividad &a) {
    if (indice >= 0 && indice < numEstudiantes)
        registrarActividadParaEstudiante(estudiantes[indice], a);
}

void Administrador::registrarActividadMentor(int indice,  Actividad &a) {
    if (indice >= 0 && indice < numMentores)
        registrarActividadParaMentor(mentores[indice], a);
}

#endif
