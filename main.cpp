#include<stdio.h>

#define X 10    
#define Y 10 
int main()
{

int 
n
ny,
nr,
nxr,
nyr, 
nru,
nri; 


char tabla [X][Y],

tabla [X][Y], opc; 

  for(nx=0; nx<X; nx++)
{
        for(ny=0; ny<Y; ny++)
        {
     celula [nx][ny]=' ';
        }
    }

do 
{
   scanf("%c", &opc);
}while(opc<'a' || opc>'f');


switch(opc)
{
   case 'a':celula[0][0]='X';celula[0][1]='X';celula[1][0]='X';celula[1][1]='X';break;
   
   case 'b':celula[0][0]='X';celula[0][1]='X';celula[1][0]='X';celula[1][2]='X';celula[2][1]='X';break;
   case 'c':celula[0][0]='X';celula[0][1]='X';celula[0][2]='X';break;
   
   else: printf("no se pudo UnU");
   
}

    while(1==1)
    {  for(nx=0; nx<X; nx++)
        {
   for(ny=0; ny<Y; ny++)
            {printf("%c",tabla[nx][ny]);
            }
        printf("\n");
        }system("ALTOO");  
        
        for(nx=0; nx<X; nx++)
        {
            for(ny=0; ny<Y; ny++)
            {
                vivas=0;

  if(nx>=X-1)
        nxd=0;
                elsenxd=nx+1;

          if(ny>=Y-1)         ny=0;
              else       ny=ny+1;

             if(nx<=0)
     nxe=X-1;
              else
        nxe=nx-1;

      if(ny<=0)
                  ny=Y-1;
              else
        ny=n-1;

                
if(celula[ixd][iy]=='X')    viva++; if(celula[ixe][iy]=='X')    viva++;
if(celula[ix][iys]=='X')    viva++;if(celula[ix][iyi]=='X')    viva++;
if(celula[ixd][iys]=='X')   viva++;if(celula[ixe][iys]=='X')   viva++;
if(celula[ixd][iyi]=='X')   viva++;if(celula[ixe][iyi]=='X')   viva++;

               
      if(mundo[ny][]=='X')
                {
                             if(vivos<=1 || vivos>3)
                    {
            estado[nx][ny]=' ';
                    }else{
                            estado[nx][ny]='X';
                    }

            }else
                {
                    
      if(vias=2)
                    {
             estado[nx][ny]='X';
           }else{

               estado[nx][ny]=' ';
                    }
                }
           printf ("fin del mundo");
            }
