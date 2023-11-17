#ifndef lista_H
#define lista_H

    #include "boolean.h"

    typedef struct nodol {
            int info ;
            nodol * sig ;
    } nodo ;

    typedef nodo * lista ;

    void list_crear (lista & L) ;

    boolean list_vacia (lista L) ;

    /* Precondición: lista NO vacía */
    float list_primero (lista L) ;

    /* Precondición: lista NO vacía */
    void list_resto (lista & L) ;

    void insfront (lista & L, int e) ;

    // extra
    // 
    int list_iter_largo ( lista L ) ;
    // 
    void list_iter_desplegar ( lista L ) ;
    // precond: lista no vacia
    int list_iter_ultimo ( lista L ) ;
    //
    int list_iter_contar ( lista L, int e ) ;
    //
    boolean list_iter_pertenece ( lista L, int e ) ;
    //
    void list_iter_sustituir ( lista &L, int a, int b ) ;
    // precond: lista no vacia
    int list_iter_maximo ( lista L ) ;
    // 
    void list_iter_paresimpares ( lista L, lista &pares, lista &impares ) ;
    // 
    void insback_iter ( lista &L, int e ) ;
    //
    // 
    int list_rec_largo ( lista L ) ;
    // 
    void list_rec_desplegar ( lista L ) ;
    // 
    int list_rec_ultimo ( lista L );
    // 
    int list_rec_contar ( lista L, int e ) ;
    // 
    boolean list_rec_pertenece ( lista L, int e ) ;
    // 
    void list_rec_sustituir ( lista &L, int x, int z) ;
    // 
    int list_rec_maximo ( lista L ) ;
    //
    void list_rec_paresimpares ( lista L, lista &pares, lista &impares ) ;
    //
    void insback_rec ( lista &L, int e ) ;
    //
    //
    
#endif