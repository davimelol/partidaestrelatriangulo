/*
 * File:   botoes_init.c
 * Author: 20185086
 *
 * Created on 18 de Fevereiro de 2021, 14:20
 */


#include <xc.h>  

void botoes_init(void)
    {
    TRISDbits.TRISD1 = 1;
    TRISDbits.TRISD0 = 1;
    }
int botaoliga(void)
{
    return( PORTDbits.RD1);
   
}
int botaodesliga(void)
{
   return( PORTDbits.RD0);
}