/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
    int n=1;

    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &n);

    printf ("Inicio del conteo: \n");

    for (int i=1; i<=n; i++)
    {
    printf ("%d\n", i);
    }

    printf ("Fin del conteo \n");
    return (1);
}

