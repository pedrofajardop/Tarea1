//
// Created by Matias Fernandez Mayol on 3/27/22.
//

#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>
#include "LIBROS.h"

#define MAXCHAR 1000

Libro* getLibros(FILE *fp) {
    //genero un array dinamico de personas
    Libro *libros = (Libro*) malloc(sizeof(Libro));;

    char row[MAXCHAR];
    char *token;
    int cont = 0;
    //saco la primer linea
    fgets(row, MAXCHAR, fp);
    while (feof(fp) != true){
        //obtiene la linea siguiente
        fgets(row, MAXCHAR, fp);
        token = strtok(row, ",");
        //print id first
        Libro  libro;
//convierto el id en entero
        int anio = atoi(token);
        int estante_numero= atoi(token);
        int  piso= atoi(token);

//lo paso a la persona
        libro.anio = anio;
        libro.estante_numero=estante_numero;
        libro.piso=piso;

        strcpy( libro.titulo, strtok(NULL, ","));
        strcpy( libro.autor, strtok(NULL, ","));
        strcpy( libro.estante_seccion, strtok(NULL, ","));
        strcpy( libro.edificio, strtok(NULL, ","));
        strcpy( libro.sede, strtok(NULL, ","));
        libros[cont] = libro;
        cont++;
    }
    return libros;
}


