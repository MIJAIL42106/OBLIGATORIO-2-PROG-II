#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

    #include "stringd.h"

    typedef struct {
        long int cedula;
        string nombre;
        string apellido;
        long int telefono;
        int cant_consultas;
    }Paciente;

    // Registrar los datos de un nuevo paciente
    Paciente RegistrarNuevoPaciente (Paciente &p);

    // Despliega por pantalla los datos de un paciente
    void DesplegarPaciente (Paciente p);

    // Devuelve la cedula de un paciente
    long int DarCedulaPaciente (Paciente p);

    // Devuelve el nombre de un paciente
    void DarNombrePaciente (Paciente p, string &nombre);

    // Devuelve el apellido de un paciente
    void DarApellidoPaciente(Paciente p, string &apellido);

    // Devuelve el telefono de un paciente
    long int DarTelefonoPaciente(Paciente p);
    
    // Devuelve la cantidad de consultas de un paciente
    int DarCantConsultas (Paciente p);
    
#endif // PACIENTE_ARBOL_H_INCLUDED 