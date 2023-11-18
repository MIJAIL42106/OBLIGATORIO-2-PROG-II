#ifndef ARBOLPACIENTES_H_INCLUDED
#define ARBOLPACIENTES_H_INCLUDED

    #include "paciente.h"

    typedef struct nodoA
    {
        Paciente info;
        nodoA * hizq;
        nodoA * hder;
    }nodo;

    typedef nodo * ArbolP;

    // Crear un arbol vacio
    void ArbolCrear (ArbolP &a);

    // Saber si el arbol esta vacio.
    boolean ArbolVacio (ArbolP a);

    // Devolver la raiz del arbol. Precondicion: Arbol NO vacio.
    Paciente ArbolRaiz (ArbolP a);

    // Obtener el subarbol izquierdo. Precondicion: Arbol NO vacio.
    ArbolP ArbolHijoIzq (ArbolP a);

    // Obtener el subarbol derecho. Precondicion: Arbol NO vacio.
    ArbolP ArbolHijoDer (ArbolP a);

    // 
    void ArbolInsert (ArbolP &a, Paciente P);

    // Lista a todos los pacientes registrados en orden segun su cedula
    void ListarPacientesEnOrden (ArbolP a);

    // Lista a aquellos pacientes que nunca han tenido una consulta.
    void ListarPacientesSinConsultas (ArbolP a);

    // Dado un numero de consultas se devuelve la cantidad de pacientes que hasta la fecha tienen esa cantidad
    int CantPacientesNroConsultas (ArbolP a, int x);

    // cedula y cantidad de consultas de paciente con mayor cantidad de consultas
    void CedulaCantMayorConsultas(ArbolP a, long int &ced, int &cant);
    

#endif // ARBOLPACIENTES_H_INCLUDED
