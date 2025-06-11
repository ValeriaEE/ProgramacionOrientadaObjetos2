#include "estudiante.h"
#include "mentor.h"
#include "profesor.h"
#include "administrador.h"
#include <iostream>
#include "administrador.h"
#include "actividad.h"
using namespace std;

int main() {
    Administrador admin;
    int opcion;

    do {
        cout << "\n----- MENU TEC-DROID -----\n";
        cout << "1. Agregar estudiante\n";
        cout << "2. Agregar mentor\n";
        cout << "3. Agregar profesor\n";
        cout << "4. Mostrar todas las personas\n";
        cout << "5. Ver lista de personas que pueden ir al regional\n";
        cout << "6. Registrar actividad a una persona\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        cin.ignore(); // Limpia buffer

        if (opcion == 1) {
            string nombre, area, tipo;
            int edad, puntos;

            cout << "Nombre: "; getline(cin, nombre);
            cout << "Edad: "; cin >> edad;
            cout << "Puntos Impact (iniciales): "; cin >> puntos;
            cin.ignore();
            cout << "Area: "; getline(cin, area);
            cout << "Tipo colaborador: "; getline(cin, tipo);

            Estudiante est(nombre, edad, puntos, area, tipo);
            admin.agregarEstudiante(est);

        } else if (opcion == 2) {
            string nombre;
            int edad, horas;

            cout << "Nombre: "; getline(cin, nombre);
            cout << "Edad: "; cin >> edad;
            cout << "Horas de servicio (iniciales): "; cin >> horas;

            Mentor m(nombre, edad, horas);
            admin.agregarMentor(m);

        } else if (opcion == 3) {
            string nombre, puesto, depto;
            int edad;

            cout << "Nombre: "; getline(cin, nombre);
            cout << "Edad: "; cin >> edad;
            cin.ignore();
            cout << "Puesto: "; getline(cin, puesto);
            cout << "Departamento: "; getline(cin, depto);

            Profesor p(nombre, edad, puesto, depto);
            admin.agregarProfesor(p);

        } else if (opcion == 4) {
            admin.mostrarEstudiantes();
            admin.mostrarMentores();
            admin.mostrarProfesores();

        } else if (opcion == 5) {
            admin.generarListaAsistentes();

        } else if (opcion == 6) {
            string nombreActividad;
            int puntos, horas, tipo;

            cout << "Nombre de la actividad: ";
            cin.ignore();
            getline(cin, nombreActividad);
            cout << "Puntos CAS: ";
            cin >> puntos;
            cout << "Horas de servicio: ";
            cin >> horas;
            cout << "¿Asignar a? (1. Estudiante, 2. Mentor): ";
            cin >> tipo;

            Actividad act(nombreActividad, puntos, horas);

            if (tipo == 1) {
                admin.mostrarEstudiantes();
                cout << "Selecciona el índice del estudiante: ";
                int idx;
                cin >> idx;
                admin.registrarActividadEstudiante(idx, act);
            } else if (tipo == 2) {
                admin.mostrarMentores();
                cout << "Selecciona el índice del mentor: ";
                int idx;
                cin >> idx;
                admin.registrarActividadMentor(idx, act);
            } else {
                cout << "Opción inválida.\n";
            }
        }

    } while (opcion != 0);

    cout << "Gracias por usar el sistema.\n";
    return 0;
}
