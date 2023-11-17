#include "stringd.h"

// -
void str_crear ( string &s ) {
    s = new char [1] ;
    s[0] = '\0' ;
}
// -
void str_destruir ( string &s ) {
    delete [] s ;
    s = NULL ;
}
// -
int str_lar ( string s ) {
    int i = 0 ;
    while ( s[i] != '\0' ) {
        i++ ;
    }
    return ( i ) ;
}
// -
void print ( string s ) {
    int i = 0 ;
    while ( s[i] != '\0' ) {
        printf ("%c", s[i] ) ;
        i++ ;
    } 
}
// -
void scan ( string &s ) {
    string aux = new char [MAXS] ;
    int i = 0 ;
    char c ;
    scanf ("%c",&c);
    while (c != '\n' && i < MAXS-1 ) {
        aux[i] = c ;
        i++ ;
        scanf("%c",&c) ;
    }
    aux[i] = '\0' ;
    str_cop ( s, aux ) ;
    str_destruir ( aux ) ;
}
// -
boolean str_menor ( string s1, string s2 ) {
    boolean b = TRUE ;
    int i = 0 ;
    while ( b && s1[i] != '\0' && s2[i] != '\0') {
        if ( s1[i] >= s2[i] )
            b = FALSE ;
        else
            i++ ;
    }
    return ( b ) ;
}
// -
boolean str_eq ( string s1, string s2 ) {
    boolean b = TRUE ;
    int i = 0 ;
        do {
            if ( s1[i] != s2[i] )
                b = FALSE ;
            else
                i++ ;
        } while ( b && ( i == 0 || s1[i-1] != '\0') ) ;
    return ( b ) ;
}
// -
void str_cop ( string &s1, string s2 ) {
    int i = 0 ;
    int largo = str_lar( s2 ) + 1 ;
    delete [] s1 ;
    s1 = new char [largo] ;
    while ( s2[i] != '\0' ) {
        s1[i] = s2[i] ;
        i++ ;
    } 
    s1[i] = '\0' ;
}
// - 
void str_con ( string &s1, string s2 ) {
    int largo = str_lar( s2 ) + str_lar( s1 ) + 1 ;
    if ( largo > MAXS )
        largo = MAXS ;
    int i = 0, j = 0 ;
    string aux ;
    str_crear ( aux ) ;
    str_cop ( aux, s1 ) ;
    delete [] s1 ;
    s1 = new char [ largo ] ;
    while ( aux[i] != '\0' ) {
        s1[i] = aux[i] ; 
        i++ ;
    }
    while ( s2[j] != '\0' && i < MAXS-1 ) {
        s1[i] = s2[j] ; 
        j++ ;
        i++ ;
    }
    s1[i] = '\0' ;
    str_destruir ( aux ) ;
}
// -
void str_swp ( string &s1, string &s2 ) {
    string aux = s1 ;
    s1 = s2 ;
    s2 = aux ;  
}