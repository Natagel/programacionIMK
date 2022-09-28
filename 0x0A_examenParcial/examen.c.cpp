/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include "main.h"

int main()
{
    float volumen, densidad, costo;
    char opcion;
    
    printf("Elige el tipo de producto:\n");
    printf("a - Aceite\n");
    printf("b - Alcohol\n");
    printf("c - Gasolina\n");
    printf("d - Acetona\n");
    scanf("%c", &opcion);
    
    printf("ingresa el volumen a envasar:\n");
    scanf("%f", &volumen);
    
    if (volumen == 500)
    {
        costo = 1.006;
    }
    else if(volumen == 1000)
    {
        costo = 1.6816;
    }
    else if (volumen == 1500)
    {
        costo = 1.9610;
    }
    else{
        costo = 3.1038;
    }
    
    switch(opcion)
    {
        case 'a':
        densidad = 0.9;
        area(volumen, densidad, costo);
        break;
        case 'b':
        densidad = 0.8;
        area (volumen, densidad, costo);
        break;
        case 'c':
        densidad = 0.68;
        area(volumen, densidad, costo);
        break;
        case 'd':
        densidad = 0.79;
        area(volumen, densidad, costo);
        break;
        default:
        printf("Error");
        break;
            
    }
    
}
    
    
    
    
