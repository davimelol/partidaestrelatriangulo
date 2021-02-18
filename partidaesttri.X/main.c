/*
 * File:   main.c
 * Author: 20185086
 *
 * Created on 18 de Fevereiro de 2021, 14:02
 */


#include <xc.h>
#include "config.h"
#include "botoes_init.h"
#include "contatores_init.h" 

void main(void) 
{
contatores_init();
botoes_init();
    
    while(1)
    { 
        if( botaoliga () == 1)
        k1 (1);
        k2 (1);
        k3 (0);
        __delay_ms(5000);
        k1(0);
        k2 (0);
        k3 (1);
        if(botaodesliga() == 1 )
        k1 (0);
        k2 (0);
        k3 (0);
    }
}
