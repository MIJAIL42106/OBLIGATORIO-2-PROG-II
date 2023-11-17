#ifndef _stringd_H
#define _stringd_H

    #include "boolean.h"
    const int MAXS = 80 ;
    typedef char * string ;
    
    // apunta a string valido "\0"
    void str_crear ( string &s ) ;
    // libera memoria y apunta a NULL
    void str_destruir ( string &s ) ;  
    // devuelve largo de string, sin contar \0
    int str_lar ( string s ) ;
    // copia s2 en s1
    void str_cop ( string &s1, string s2 ) ;
    // carga por teclado un string
    void scan (string &s) ;
    // concatena s2 al final de s1
    void str_con ( string &s1, string s2 ) ;
    // TRUE si los strings son iguales
    boolean str_eq ( string s1, string s2 ) ;
    // mustra string por pantalla
    void print ( string s ) ;
    // TRUE si los elementos de s1 son menores a su correspondiente en s2
    boolean str_men ( string s1, string s2 ) ;
    // intercambia contenido de dos trings
    void str_swp ( string &s1, string &s2 ) ;

#endif