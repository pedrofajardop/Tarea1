#include <math.h>
#include <stdio.h>

int main()
{
    int n, opcion;

    do
    {
        printf( "\n   1. agregar un libro nuevo.", 163 );
        printf( "\n   2.  quitar un libro", 163 );
        printf( "\n   3.  agregar una sede", 163 );
        printf( "\n   4. Salir." );
        printf( "\n\n   Introduzca opci%cn (1-4): ", 162 );

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                scanf( "%d", &n );
                printf( "\n   El doble de %d es %d\n\n", n, n * 2 );
                break;

            case 2: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                scanf( "%d", &n );
                printf( "\n   La mitad de %d es %f\n\n", n, ( float ) n / 2 );
                break;

            case 3: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                scanf( "%d", &n );
                printf( "\n   El cuadrado de %d es %d\n\n", n, ( int ) pow( n, 2 ) );
        }

        /* Fin del anidamiento */

    } while ( opcion != 4 );

    return 0;
}

// probando probandooo
