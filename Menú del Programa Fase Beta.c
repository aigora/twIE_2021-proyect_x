#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
   int  seleccion1,seleccion2,cal;

    float hmin,hmax,tmin,tmax;

    char palabra[4];
  do{

        printf( "\n   1. Comprobacion/calibracion de los sensores.");
        printf( "\n   2. Creacion de Intervalos.");
        printf( "\n   3. Medicion.");
        printf( "\n   4. Salir.\n" );
        scanf("%d", &seleccion1);

        switch (seleccion1)
        {
            case 1:
                do {
                        system("cls");
                printf("\n   La calibracion es correcta? ");
                //Esta zona se añadirá en relación con el aparato; incompleta.
                printf("\n  1. Si");
                printf("\n  2. No\n");
                scanf( "%d", &cal );
                switch (cal)
                {
                    case 1:
                    break;
                    case 2:
                     printf ("\n La calibracion no es correcta compruebe sensores.\n");
                     return 0;
                    break;
                }
                }while (seleccion2);
            break;
            case 2:
                printf( "\n   Introduzca los intervalos deseados: ");

                printf("\n  intervalo de confianza de humedad(hmin,hmax):");

                scanf("%f,%f",&hmin,&hmax);

                printf("\n  intervalo de confianza de temperatura (tmin,tmax):");

                scanf("%f,%f",&tmin,&tmx);
            break;
            case 3:
             printf( "\n   Decida que quiere medir: ");
            break;
            case 4:
                return 0;
            break;
        }
  }while(seleccion1!=4);
return 0;
}

