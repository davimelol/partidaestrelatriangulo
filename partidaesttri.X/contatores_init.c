/*
 * File:   contatores_init.c
 * Author: 20185086
 *
 * Created on 18 de Fevereiro de 2021, 14:18
 */


#include <xc.h>

void contatores_init(void)
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    PORTDbits.RD7 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;
}

void k1 (int x)
{
   PORTDbits.RD7 = x;
}
void k2 (int x)
{
   PORTDbits.RD6 = x;
}
void k3 (int x)
{
   PORTDbits.RD5 = x;
}

