#include <math.h>
#include <stdio.h>

void find_book();

int main()
{
    // extraer información del archivo csv //

    int n, option;

    do
    {
        printf( "\n   1. Manipular libros");
        printf( "\n   2. Manipular sedes");
        printf( "\n   3. Manipular sección");
        printf( "\n   4. Manipular pisos");
        printf( "\n   5. Salir." );
        printf( "\n\n   Introduzca opción (1-5): ");

        scanf( "%d", &option );

        /* Inicio del anidamiento */

        switch ( option )
        {
            case 1:
                do {
                    // acá hay que crear procedimiento que encuentre el libro a tratar //
                    find_book();

                    printf( "\n   1. Agregar libros");
                    printf( "\n   2. Quitar libro");
                    printf( "\n   3. Editar libro");
                    printf( "\n   4. Cambiar sede del libro");
                    printf( "\n   5. Cambiar sección del libro" );
                    printf( "\n   7. Cambiar piso del libro");
                    printf( "\n   8. Información general del libro");
                    printf( "\n   9. Salir");
                    printf( "\n\n   Introduzca opción (1-9): ");

                    scanf( "%d", &option );
                } while (option != 9);
                option = 1;
                break;


            case 2:
                do {
                    printf( "\n   1. Agregar sede");
                    printf( "\n   2. Quitar sede");  // comprobar que no tenga libros asociados
                    printf( "\n   3. Salir");
                    printf( "\n\n   Introduzca opción (1-3): ");
                    scanf( "%d", &option );
                } while (option != 3);
                option = 2;
                break;

            case 3:
                do {
                    printf( "\n   1. Agregar secciones");
                    printf( "\n   2. Eliminar secciones");  // comprobar que no tenga libros asociados
                    printf( "\n   3. Salir");

                    printf( "\n\n   Introduzca opción (1-3): ");
                    scanf( "%d", &option );
                } while (option != 3);
                option = 3;
                break;

            case 4:
                do {
                    printf( "\n   1. Agregar pisos");
                    printf( "\n   2. Quitar pisos");
                    printf( "\n   3. Salir");
                    printf( "\n\n   Introduzca opción (1-3): ");
                    scanf( "%d", &option );
                } while (option != 3);
                option = 4;
                break;
        }

        /* Fin del anidamiento */
    } while ( option != 5 );

    return 0;
}

void find_book() {

}
