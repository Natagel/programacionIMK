/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int N; //filas
    printf("Filas de entrada :\n");
    scanf("%d", &N);

    for (int i=1; i<=N; i++ )
    {
        
        for (int j=1; j<=i; j++ )
        {
            printf("*");

        }

        printf("\n");
    }
    
    for (int i=(N-2); i>=0; i-- )
    {
        
        for (int j=i; j>=0; j-- )
        {
            printf("*");

        }

        printf("\n");
    }

    return(0);
}