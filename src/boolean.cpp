#include "boolean.h"

void bool_cargar ( boolean &b ) {
    int valor ;
    printf ("Ingrese 0 si es falso y 1 si es verdadero: ") ;
    scanf ("%d", &valor ) ;
    if ( valor == 0 )
        b = FALSE ;
    else 
        b = TRUE ;
} 

void bool_mostrar ( boolean b ) {
    if (b)
        printf ("verdadero\n") ;
    else
        printf ("falso\n") ;
}