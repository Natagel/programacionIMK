/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include "main.h"

int area(float volumen, float densidad, float costoAnterior)
{
    float area, radiomin, areamin, y;
    float gramos;
    float pi = 3.1416;
    float costo, costom2 = 2.45;
    
    radiomin =  cbrt((2*volumen)/(4*pi));
    
    areamin = (2*pi*(pow(radiomin,2))) + 2*pi*radiomin* (volumen/pi*pow(radiomin,2))));
    
    y = (volumen/(pi*pow(radiomin,2)));
    
    costo = areamin * costom2;
    costo = costo/1000;
    
    gramos = volumen * densidad;
    float nuevo = costoAnterior - costo;
    
    printf("radio tapa: %0.2f cm\n", radiomin);
    printf("area: %0.2fcm2\n", areamin);
    printf("costo: $%0.2f\n", costo);
    printf("costo pasado %0.f ml: $ %0.2f\n", volumen, costoPasado);
    printf("ahorro: $ %0.2f\n", nuevo);
    printf("%0.f ml en gramos = %0.2fgr\n", volumen, gramos);
}
    
    
    
    
