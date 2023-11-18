#include "arbol.h"


void ArbolCrear (Arbol &a)
{
    a = NULL;
}

boolean ArbolVacio (Arbol a)
{
    return (boolean) (a == NULL);
}

int ArbolRaiz (Arbol a)
{
    return a -> info;
}

Arbol ArbolHijoIzq (Arbol a)
{
    return a -> hizq;
}

Arbol ArbolHijoDer (Arbol a)
{
    return a -> hder;
}

Arbol ArbolCons (int r,Arbol i,Arbol d)
{
    Arbol a = new nodo;
    a -> info = r;
    a -> hizq = i;
    a -> hder = d;
    return a;
}

void ArbolPreOrden (Arbol a)
{
    if(a!=NULL)
    {
        printf("%d ",a->info);
        ArbolPreOrden(a->hizq);
        ArbolPreOrden(a->hder);
    }
}

void ArbolOrden (Arbol a)
{
    if(a!=NULL)
    {
        ArbolOrden(a->hizq);
        printf("%d ",a->info);
        ArbolOrden(a->hder);
    }
}

void ArbolPostOrden (Arbol a)
{
    if(a!=NULL)
    {
        ArbolPostOrden(a->hizq);
        ArbolPostOrden(a->hder);
        printf("%d ",a->info);
    }
}

int ArbolContarNodos (Arbol a)
{
    if(a==NULL)
        return 0;
    else
        return (1 + ArbolContarNodos(a->hizq) + ArbolContarNodos(a->hder));
}

void ArbolInsert (Arbol &a, int e)
{
    if (a == NULL)
    {
        a = new nodo;
        a -> info = e;
        a -> hizq = NULL;
        a -> hder = NULL;
    }
    else
    {
        if (e < a->info)
            ArbolInsert (a -> hizq, e);
        else
            ArbolInsert (a -> hder, e);
    }
}

boolean ArbolPerteneceRecu (Arbol a, int e)
{
    if (a == NULL)
        return FALSE;
    else
        if (a -> info == e)
            return TRUE;
        else
            if (e < a -> info)
                return ArbolPerteneceRecu (a -> hizq, e);
            else
                return ArbolPerteneceRecu (a -> hder, e);
}

boolean ArbolPerteneceIter (Arbol a, int e)
{
    boolean encontre = FALSE;
    while (a != NULL && !encontre)
    {
        if (e == a -> info)
            encontre = TRUE;
        else
            if (e < a -> info)
                a = a -> hizq;
            else
                a = a -> hder;
    }
    return encontre;
}

int ArbolSuma (Arbol a)
{
    if (a == NULL)
        return 0;
    else
        return (a -> info) + ArbolSuma (a -> hizq) + ArbolSuma (a -> hder);
}

void ArbolListarImpares (Arbol a)
{
    if (a != NULL)
    {
        ArbolListarImpares (a -> hizq);
        if(a->info%2!=0)
            printf ("%d ", a -> info);
        ArbolListarImpares (a -> hder);
    }
}

int ArbolMaximoiter (Arbol a)
{
    while (a -> hder != NULL)
        a = a -> hder;
    return (a->info);
}

int ArbolMaximoRecu (Arbol a)
{
    if (a -> hder == NULL)
        return (a->info);
    else
        return ArbolMaximoRecu (a -> hder);
}

int ArbolMinimoIter (Arbol a)
{
    while (a -> hizq != NULL)
        a = a -> hizq;
    return (a->info);
}

int ArbolMinimoRecu (Arbol a)
{
    if (a -> hizq == NULL)
        return (a->info);
    else
        return ArbolMinimoRecu (a -> hizq);
}

int ArbolContarMultiplos (Arbol a, int n)
{
    if(a!=NULL)
    {
        if(a->info%n==0)
            return(1+ArbolContarMultiplos(a->hder,n)+ArbolContarMultiplos(a->hizq,n));
        else
            return(ArbolContarMultiplos(a->hder,n)+ArbolContarMultiplos(a->hizq,n));
    }
}

void ArbolSumaParImpar (Arbol a, int &sumapar, int &sumaimpar)
{
    if (a != NULL)
    {
        if(a->info%2==0)
            sumapar+=a->info;
        else
            sumaimpar+=a->info;
        ArbolSumaParImpar(a->hizq,sumapar,sumaimpar);
        ArbolSumaParImpar(a->hder,sumapar,sumaimpar);
    }
}

boolean ArbolValorEsHojaIter (Arbol a, int n)
{
    boolean pertenece = FALSE;
    while (a != NULL && !pertenece)
    {
        if (a -> hder == NULL && a -> hizq == NULL && n == a -> info)
            pertenece = TRUE;
        else
            if (n < a -> info)
                a = a -> hizq;
            else
                a = a -> hder;
    }
    return pertenece;
}

boolean ArbolValorEsHojaRecu (Arbol a, int n)
{
    if (a == NULL)
        return FALSE;
    else
        if (a -> hder == NULL && a -> hizq == NULL && n == a -> info)
            return TRUE;
        else
            if (n < a -> info)
                return ArbolValorEsHojaRecu (a -> hizq, n);
            else
                return ArbolValorEsHojaRecu (a -> hder, n);
}

int ArbolProfundidadValorIter (Arbol a, int n)
{
    boolean encontre = FALSE;
    int prof=0;
    while(!encontre)
    {
        if (n == a -> info)
            encontre = TRUE;
        else
            if (n < a -> info)
                a = a -> hizq;
            else
                a = a -> hder;
        prof++;
    }
    return prof;
}

int ArbolProfundidadValorRecu (Arbol a, int n)
{
    if (a == NULL)
        return 0;
    else
        if (a -> info == n)
            return 1;
        else
            if (n < a -> info)
                return (1 + ArbolProfundidadValorRecu (a -> hizq, n));
            else
                return (1 + ArbolProfundidadValorRecu (a -> hder, n));
}

void ArbolListarNivel (Arbol a, int n)
{
    if(a!=NULL && n!=0)
    {
        n--;
        ArbolListarNivel(a->hizq, n);
        printf("%d ",a->info);
        ArbolListarNivel(a->hder, n);
    }
}

void ArbolEliminarTodo(Arbol &a)
{
    if(a!=NULL)
    {
        ArbolEliminarTodo(a->hizq);
        ArbolEliminarTodo(a->hder);
        delete a;
        a=NULL;
    }
}

void ArbolBorrarMinimo (Arbol &a)
{
    Arbol aux;
    if (a -> hizq == NULL)
    {
        aux = a -> hder;
        delete a;
        a = aux;
    }
    else
        ArbolBorrarMinimo (a -> hizq);
}

void ArbolBorrarValor (Arbol a, int n)
{
    Arbol aux;
    if (n == a -> info)
    {
        if (a -> hder == NULL)
        {
            aux = a -> hizq;
            delete a;
            a = aux;
        }
        else
            {
                if (a -> hizq == NULL)
                {
                    aux = a -> hder;
                    delete a;
                    a = aux;
                }
                else
                {
                    a -> info = ArbolMinimoRecu (a -> hder);
                    ArbolBorrarMinimo (a -> hder);
                }
            }
    }
    else
        {
            if (n < a -> info)
                ArbolBorrarValor (a -> hizq,n);
            else
                ArbolBorrarValor (a -> hder,n);
        }
}
