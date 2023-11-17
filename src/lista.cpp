#include "lista.h" 

void list_crear (lista & L) {
    L = NULL;
}

boolean list_vacia (lista L) {
    boolean es = FALSE;
    if (L == NULL)
        es = TRUE;
    return es;
}

/* Precondición: lista NO vacía */
float list_primero (lista L) {
    return L -> info;
}

/* Precondición: lista NO vacía */
void list_resto (lista & L) {
    lista aux = L;
    L = L -> sig;
    delete aux;
}

void insfront (lista & L, int e) {
    lista aux = new nodo;
    aux -> info = e;
    aux -> sig = L;
    L = aux;
}

// extra
//
int list_iter_largo ( lista L ) {
    int lar = 0 ;
    while ( L != NULL ) {
        lar++ ;
        L = L->sig ;
    }
    return lar ;
}
// 
void list_iter_desplegar ( lista L ) {
    while ( L != NULL ) {
            printf ("%d ", L->info ) ;
            L = L -> sig ;
    }
}
// 
// precond: lista no vacia
int list_iter_ultimo ( lista L ) {
    while ( L->sig != NULL ) 
        L = L->sig ;
    return L->info ;
}
// 
int list_iter_contar ( lista L, int e ) {
    int cont = 0 ;
    while ( L != NULL ) {
        if ( L->info == e )
            cont++ ;
        L = L->sig ;
    }
    return cont ;
}
// 
boolean list_iter_pertenece ( lista L, int e ) {
    boolean encontre = FALSE ;
    while ( L != NULL && !encontre ) {
        if ( L->info == e )
            encontre = TRUE ;
        else
            L = L->sig ;
    }
    return encontre ;
}
// 
void list_iter_sustituir ( lista &L, int a, int b ) {
    lista aux = L ;
    while ( aux != NULL ) {
        if ( aux->info == a )
            aux->info = b ;
        aux = aux->sig ;
    }
}
// precond: lista no vacia
int list_iter_maximo ( lista L ) {
    int max = L->info ;
    while ( L->sig != NULL ) {
        if ( L->sig->info > max )
            max = L->sig->info ;
        L = L->sig ;
    }
    return max ;
}
// 
void list_iter_paresimpares ( lista L, lista &pares, lista &impares ){
    while ( L != NULL ) {
        if ( L->info % 2 == 0 )
            insfront ( pares, L->info ) ;
        else 
            insfront ( impares, L->info ) ;
        L = L->sig ;
    }
}
// 
void insback_iter ( lista &L, int e ) {
    lista nuevo = new nodo ;
    nuevo->info = e ;
    nuevo->sig = NULL ;
    if ( L == NULL )
        L = nuevo ;
    else {
        lista aux = L ;
        while ( aux->sig != NULL ) 
            aux = aux->sig ;    
        aux->sig = nuevo ;
    }
}
//
int list_rec_largo ( lista L ) {
    if ( L == NULL )
        return 0 ;
    else 
        return ( 1 + list_rec_largo ( L->sig )) ;
}
// 
void list_rec_desplegar ( lista L ) {
    if ( L != NULL ) {
        printf ("%d ", L->info ) ;
        list_rec_desplegar ( L->sig ) ;
    }     
}
// 
int list_rec_ultimo ( lista L ) {
    if ( L->sig == NULL )
        return ( L->info ) ;
    else 
        return ( list_rec_ultimo ( L->sig )) ;
}
// 
int list_rec_contar ( lista L, int e ) {
    if ( L == NULL )
        return 0 ;
    else 
        if ( L->info == e )
            return ( 1 + list_rec_contar ( L->sig, e )) ;
        else 
            return ( list_rec_contar ( L->sig, e )) ;
}
// 
boolean list_rec_pertenece ( lista L, int e ) {
    if ( L == NULL )
        return FALSE ;
    else 
        if ( L->info == e )
            return TRUE ;
        else 
            return ( list_rec_pertenece ( L->sig, e )) ;
}
// 
void list_rec_sustituir ( lista &L, int x, int z) {
    if( L != NULL ) {
        if( L->info == x )
            L->info = z ;
        list_rec_sustituir( L->sig ,x ,z ) ;
    }
}
// 
int list_rec_maximo ( lista L ) {
    if ( L->sig == NULL ) 
        return L->info ;
    else {
        if ( L->info > list_rec_maximo ( L->sig ) )
            return ( L->info ) ;
    }
}
// 
void list_rec_paresimpares ( lista L, lista &pares, lista &impares ) {
    if ( L != NULL ) {
        if ( L->info % 2 == 0 )
            insfront ( pares, L->info ) ;
        else 
            insfront ( impares, L->info ) ;
        list_rec_paresimpares ( L->sig, pares, impares ) ;
    }
}
// 
void insback_rec ( lista &L, int e ) {
    if ( L == NULL ) {
        L = new nodo ;
        L->info = e ;
        L->sig = NULL ;
    } else 
        insback_rec ( L->sig, e ) ;
}
// 6
// a iter 
void borrarocurrenciasiter ( lista &L, int e ) {
    while ( L != NULL && L->info == e ) {
        lista aux = L ;
        L = L->sig ;
        delete aux ;
    }        
    if ( L != NULL ) {
        lista aux = L ;
        while ( aux != NULL ) {
            if ( aux->info == e ) {
                lista aux1 = aux ;
                aux = aux->sig ;
                delete aux1 ;
            } else 
                aux = aux->sig ;
        }
    }
}
/*void borrarocurrencias ( lista &L, int e ) {
    lista aux = L ;
    while ( aux->sig != NULL ) {
        if ( aux->info == e ) {
            delete aux ;
            *aux = aux->sig ;
        } else
            aux = aux->sig ;
    }
}*/
// a rec
void borrarocurrenciasrec ( lista &L, int e ) {
    if ( L != NULL ) {
        if ( L->info == e ) {
            lista aux = L ;
            L = L->sig ;
            delete aux ;
        } else 
            borrarocurrenciasrec ( L->sig, e ) ;
    }
}