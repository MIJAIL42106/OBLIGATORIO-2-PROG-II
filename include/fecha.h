#ifndef _fecha_H
#define _fecha_H

    #include "boolean.h"

    typedef struct  {
        int dd ;
        int mm ;
        int aa ;
    } fecha ;

    boolean fecha_valida ( fecha x ) ; // bisiestos = mult 4
    boolean fecha_iguales ( fecha x, fecha y ) ;
    void fecha_cargar ( fecha &x ) ;
    void fecha_desplegar ( fecha x ) ;
    int r_dd ( fecha x ) ;
    int r_mm ( fecha x ) ;
    int r_aa ( fecha x ) ;

#endif
