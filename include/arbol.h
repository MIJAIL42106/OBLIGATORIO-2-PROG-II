#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

    #include "boolean.h"

    typedef struct nodoA
    {
        int info;
        nodoA * hizq;
        nodoA * hder;
    }nodo;

    typedef nodo * Arbol;

    // Crear un arbol vacio
    void ArbolCrear (Arbol &a);

    // Saber si el arbol esta vacio.
    boolean ArbolVacio (Arbol a);

    // Devolver la raiz del arbol. Precondicion: Arbol NO vacio.
    int ArbolRaiz (Arbol a);

    // Obtener el subarbol izquierdo. Precondicion: Arbol NO vacio.
    Arbol ArbolHijoIzq (Arbol a);

    // Obtener el subarbol derecho. Precondician: Arbol NO vacio.
    Arbol ArbolHijoDer (Arbol a);

    /* Dados dos arboles y un valor, devolver un nuevo arbol colocando dicho valor como una nueva raiz y a los dos arboles como subarboles de la misma.
    Arbol ArbolCons (int r,Arbol i,Arbol d);*/

    void ArbolPreOrden (Arbol a);

    void ArbolOrden (Arbol a);  //

    void ArbolPostOrden (Arbol a);

    int ArbolContarNodos (Arbol a);

    void ArbolInsert (Arbol &a, int e);

    // saber si un elemento pertenece al ABB, versión recursiva
    boolean ArbolPerteneceRecu (Arbol a, int e);

    // saber si un elemento pertenece al ABB, versión iterativa
    boolean ArbolPerteneceIter (Arbol a, int e);

    int ArbolSuma (Arbol a);

    void ArbolListarImpares (Arbol a);

    // PRECONDICION: a no vacio
    int ArbolMaximoIter (Arbol a);

    // PRECONDICION: a no vacio
    int ArbolMaximoRecu (Arbol a);

    // PRECONDICION: a no vacio
    int ArbolMinimoIter (Arbol a);

    // PRECONDICION: a no vacio
    int ArbolMinimoRecu (Arbol a);

    int ArbolContarMultiplos (Arbol a, int n);

    void ArbolSumaParImpar (Arbol a, int &sumapar, int &sumaimpar);

    boolean ArbolValorEsHojaIter (Arbol a, int n);

    boolean ArbolValorEsHojaRecu (Arbol a, int n);

    // PRECONDICION: n pertenece a "a"
    int ArbolProfundidadValorIter (Arbol a, int n);

    // PRECONDICION: n pertenece a "a"
    int ArbolProfundidadValorRecu (Arbol a, int n);

    void ArbolListarNivel (Arbol a, int n);

    void ArbolEliminarTodo(Arbol &a);

    // PRECONDICION: a no vacio
    void ArbolBorrarMinimo (Arbol &a);

    // PRECONDICION: a no vacio y n pertenece a "a"
    void ArbolBorrarValor (Arbol a, int n);

#endif // ARBOL_H_INCLUDED
