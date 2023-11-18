#include "arbolpacientes.h"

void ArbolCrear (ArbolP &a)
{
    a = NULL;
}

boolean ArbolVacio (ArbolP a)
{
    return (boolean) (a == NULL);
}

Paciente ArbolRaiz (ArbolP a)
{
    return a -> info;
}

ArbolP ArbolHijoIzq (ArbolP a)
{
    return a -> hizq;
}

ArbolP ArbolHijoDer (ArbolP a)
{
    return a -> hder;
}

void ArbolInsert (ArbolP &a, Paciente P)
{
    if (a == NULL)
    {
        a = new nodo;
        a -> info = P;
        a -> hizq = NULL;
        a -> hder = NULL;
    }
    else
    {
        if (P.cedula < a->info.cedula)
            ArbolInsert (a -> hizq, P);
        else
            ArbolInsert (a -> hder, P);
    }
}

void ListarPacientesEnOrden (ArbolP a)
{
    ListarPacientesEnOrden(a->hizq);
    DesplegarPaciente(a->info);
    ListarPacientesEnOrden(a->hder);
}

void ListarPacientesSinConsultas (ArbolP a)
{
    ListarPacientesEnOrden(a->hizq);
    if(a->info.cant_consultas==0)
        DesplegarPaciente(a->info);
    ListarPacientesEnOrden(a->hder);
}

int CantPacientesNroConsultas (ArbolP a, int x)
{
    if(a!=NULL)
    {
        if( a->info.cant_consultas >= x )
            return(1+CantPacientesNroConsultas(a->hder,x)+CantPacientesNroConsultas(a->hizq,x));
        else
            return(CantPacientesNroConsultas(a->hder,x)+CantPacientesNroConsultas(a->hizq,x));
    }
}

void CedulaCantMayorConsultas(ArbolP a, long int &ced, int &cant)
{   
    int max=0;
    while(!encontre)
    {
    if(a -> info == ced)
        encontre=False;
    else
    {
        if(a -> info < ced)
            a = a-> hizq;
        else
            a = a ->hder;
    }
    }
    return (a -> info);
}
