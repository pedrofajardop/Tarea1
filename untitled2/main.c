#include <stdio.h>

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


void showContentsAsStruct(FILE *pFile);

FILE * openingFile(char *filename){
    FILE *fp;
    fp = fopen(filename,READ_ONLY);
    return fp;
}



int main(int argc, char *argv[] ){

    FILE *fp = openingFile(argv[1]);

    showContentsAsStruct(fp);


    return 0;

}

void showContentsAsStruct(FILE *pFile) {
    Persona *personas;
    //paso el contenido del file a un array de personas
    personas = getPersonas(pFile);
    int length=sizeof(*personas);
    //Solo imprimo el mail de cada persona leyendo ya directo del arreglo
    for (int i = 0; i < length; ++i) {
        printf("%s \n", personas[i].email);
    }

}


void showContents(FILE *myFile) {
    char row[MAXCHAR];
    char *token;
    //muestra el contenido del archivo
    while (feof(myFile) != true){
        //obtiene la linea siguiente
        fgets(row, MAXCHAR, myFile);
        token = strtok(row, ",");
        //print id first
        printf("Row: %s \n", token);
        for (int i = 0; i < 5; ++i) {
            printf("Token %d: %s\n", i, token);
            token = strtok(NULL, ",");
        }

    }
}