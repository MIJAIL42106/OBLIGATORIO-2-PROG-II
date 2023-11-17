#include "fecha.h"

boolean valida ( fecha x ) {
    boolean valida = FALSE ;
    switch ( r_mm( x ) ) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            if ( r_dd( x ) > 0 && r_dd( x ) <= 31 )
                valida = TRUE ;
            break ;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            if ( r_dd( x ) > 0 && r_dd( x ) <= 30 )
                valida = TRUE ;
            break ;
        case 2 :
            if ( r_aa(x) % 4 == 0 ) {
                if ( r_dd( x ) > 0 && r_dd( x ) <= 29 )
                    valida = TRUE ;
                break ;
            }
            else {
                if ( r_dd( x ) > 0 && r_dd( x ) <= 28 )
                    valida = TRUE ;
                break ;
            }
    }
    return ( valida ) ;
}

boolean fecha_iguales ( fecha x, fecha y ) {
    boolean iguales = FALSE ;
    if ( r_aa( x ) == r_aa( y ) && r_dd( x ) == r_dd( y ) && r_mm( x ) == r_mm( y ) )
        iguales = TRUE ;
    return ( iguales ) ;
}

void fecha_cargar ( fecha &x ) {
    printf ("Ingrese Fecha (dd mm aa): ") ;
    fflush(stdin) ;
    scanf ("%d %d %d", &x.dd, &x.mm, &x.aa ) ;
}

void fecha_desplegar ( fecha x ) {
    printf ("Fecha: %02d/%02d/%04d\n", r_dd( x ), r_mm( x ), r_aa( x ) ) ;
}

int r_dd ( fecha x ) {
    return ( x.dd ) ;
}
int r_mm ( fecha x ) {
    return ( x.mm ) ;
}
int r_aa ( fecha x ) {
    return ( x.aa ) ;
}

