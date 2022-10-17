/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// imprimir todos los numeros naturales del 1 al n

int main ()
{
    int numero=1;
    int contador =1;
    printf ("valor de n: \n");
    scanf ("%d", &numero);
    printf ("\n Los numeros naturales de %d son %d:\n", numero, contador);

    while (contador<=numero){
        printf("%d \n", contador);
        contador++;
    }    
    printf ("\n");
    return (0);
}