#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_

#include <iostream>
#include "estudiante.h"
#include "mentor.h"
#include "profesor.h"
#include "personat.h"
#include "actividad.h"
using namespace std;

const int MAX = 100;

class Administrador {
private:
    Estudiante estudiantes[MAX];
    Mentor mentores[MAX];
    Profesor profesores[MAX];

    int numEstudiantes = 0;
    int numMentores = 0;
    int numProfesores = 0;

public:
    void registrarActividadParaEstudiante(Estudiante &e, const Actividad &a);
    void registrarActividadParaMentor(Mentor &m, const Actividad &a);
    void registrarActividadEstudiante(int indice, const Actividad &a);
    void registrarActividadMentor(int indice, const Actividad &a);

    void agregarEstudiante(const Estudiante &e);
    void agregarMentor(const Mentor &m);
    void agregarProfesor(const Profesor &p);

    void mostrarEstudiantes();
    void mostrarMentores();
    void mostrarProfesores();

    void generarListaAsistentes();
};

// Implementación de métodos

void Administrador::agregarEstudiante(const Estudiante &e) {
    if (numEstudiantes < MAX)
        estudiantes[numEstudiantes++] = e;
}

void Administrador::agregarMentor(const Mentor &m) {
    if (numMentores < MAX)
        mentores[numMentores++] = m;
}

void Administrador::agregarProfesor(const Profesor &p) {
    if (numProfesores < MAX)
        profesores[numProfesores++] = p;
}

void Administrador::mostrarEstudiantes() {
    cout << "\n--- Estudiantes ---\n";
    for (int i = 0; i < numEstudiantes; ++i)
        estudiantes[i].mostrarInfo();
}

void Administrador::mostrarMentores() {
    cout << "\n--- Mentores ---\n";
    for (int i = 0; i < numMentores; ++i)
        mentores[i].mostrarInfo();
}

void Administrador::mostrarProfesores() {
    cout << "\n--- Profesores ---\n";
    for (int i = 0; i < numProfesores; ++i)
        profesores[i].mostrarInfo();
}

void Administrador::generarListaAsistentes() {
    cout << "\n--- Lista de asistentes al regional ---\n";

    int estudiantesValidos = 0;
    for (int i = 0; i < numEstudiantes; ++i)
        if (estudiantes[i].puedeIrARegional())
            estudiantesValidos++;

    int mentoresValidos = 0;
    for (int i = 0; i < numMentores; ++i)
        if (mentores[i].puedeIrARegional())
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
        if (estudiantes[i].puedeIrARegional())
            estudiantes[i].mostrarInfo();

    cout << "\nMentores válidos:\n";
    for (int i = 0; i < numMentores; ++i)
        if (mentores[i].puedeIrARegional())
            mentores[i].mostrarInfo();

    cout << "\nProfesores acompañantes:\n";
    for (int i = 0; i < necesariosProfes; ++i)
        profesores[i].mostrarInfo();
}

// Métodos de registro de actividad

void Administrador::registrarActividadParaEstudiante(Estudiante &e, const Actividad &a) {
    e.setPuntosImpact(e.getPuntosImpact() + a.getNumPuntos());
}

void Administrador::registrarActividadParaMentor(Mentor &m, const Actividad &a) {
    m.setHorasServicio(m.getHorasServicio() + a.getHoras());
}

void Administrador::registrarActividadEstudiante(int indice, const Actividad &a) {
    if (indice >= 0 && indice < numEstudiantes)
        registrarActividadParaEstudiante(estudiantes[indice], a);
}

void Administrador::registrarActividadMentor(int indice, const Actividad &a) {
    if (indice >= 0 && indice < numMentores)
        registrarActividadParaMentor(mentores[indice], a);
}

#endif
