#include <stdio.h>
int main()
{
    char dia;
    int  duracion=0;
    float costo;
while (1)
{
    printf("costo de llamada\n");
    scanf(" %d",&decision);
    if (decision == 1)
    {
    printf("que dia de la semana fue:\nL\nM\nO\nJ\nS\nD\n");
    scanf(" %c", &dia);
    if ( dia == 'L' || dia == 'M' || dia == 'O' || dia == 'J' || dia == 'V' || dia == 'S' ||dia == 'D'
        || dia == 'l' || dia == 'm' || dia == 'o' || dia == 'j' || dia == 'v' || dia == 's' ||dia == 'd')
    {
    
    printf("en el reloj 24 horas cuanto duro su llamada.\n");
    scanf(" %d",&hora);
    if (hora < 0 || hora > 2400)
    {
        printf("error\n");
        return (0);
    }else{
    
    printf("cuantos minutos duro su llamada\n");
    scanf(" %d",&duracion);
    if (dia == 'S' || dia == 's' ||dia == 'D' ||dia == 'd')
    {
     precioxminuto = 0.10;
    }else{
        if (hora < 600 || hora > 2000)
        {
            precioxminuto = 0.20;
        }else{
            precioxminuto = 0.30;
        }
    }
    costo = precioxminuto * duracion;
    printf("el costo es de:\n");
    printf("%f\n", costo);



    }}else{
        printf("ERROR\n");
        return (0);
    }
    }else{
        return 0;
    }   
}
}