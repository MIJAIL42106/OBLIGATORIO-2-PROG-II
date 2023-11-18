#include "paciente.h"

Paciente RegistrarNuevoPaciente (Paciente &p)
{
    printf("\nRegistre los datos del paciente: ");
    printf("\nIngrese la cedula: ");
    scanf("%ld",&p.cedula);
    str_crear(p.nombre);
    printf("\nIngrese el nombre: ");
    scan(p.nombre);
    str_crear(p.apellido);
    printf("\nIngrese el Apellido: ");
    scan(p.apellido);
    printf("\nIngrese el Telefono de contacto: ");
    scanf("%ld", &p.telefono);
    p.cant_consultas=0;
}

void DesplegarPaciente (Paciente p)
{
    printf("\nDatos del paciente: ");
    printf("\nCedula: %ld", p.cedula);
    printf("\nNombre: ");
    print(p.nombre);
    printf("\nApellido: ");
    print(p.apellido);
    printf("\nTelefono: %ld", p.telefono);
    printf("\nCantidad de consultas hasta el momento: %d", p.cant_consultas);
}

long int DarCedulaPaciente (Paciente p)
{
    return p.cedula;
}

void DarNombrePaciente (Paciente p, string &nombre)
{
    str_cop(nombre, p.nombre);
}

void DarApellidoPaciente(Paciente p, string &apellido)
{
    str_cop(apellido, p.apellido);
}

long int DarTelefonoPaciente(Paciente p)
{
    return p.telefono;
}

int DarCantConsultas (Paciente p)
{
    return  p.cant_consultas;
}