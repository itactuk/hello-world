#include <string.h>
#include "funciones-pract7.h"

void elimoracion(char *oracion){

    int ind;

    for(ind = 0; *(oracion+ind); ind++){

        if(*(oracion+ind) == '.' || *(oracion+ind) == '?'){
            strcpy(oracion, oracion+ind+2);
            return;
        }
    }
    *oracion = NULL;
    return;
}

