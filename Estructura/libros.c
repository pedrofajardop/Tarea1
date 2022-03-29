//
// Created by Justo Vargas on 15-03-22.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "libros.h"

#define MAXCHAR 1000

Libro* getLibros(FILE *fp) {
    //genero un array dinamico de libros
    Libro *libros = (Libro*) malloc(sizeof(Libro));

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
        //convierto el año en entero
        int anio = atoi(token);
        int estante_numero = atoi(token);
        int piso = atoi(token);
        //lo paso a la persona

        strcpy( libro.titulo, strtok(NULL, ","));
        strcpy( libro.autor, strtok(NULL, ","));
        libro.anio = anio;
        libro.estante_numero = estante_numero;
        strcpy( libro.estante_seccion, strtok(NULL, ","));
        libro.piso = piso;
        strcpy( libro.edificio, strtok(NULL, ","));
        strcpy( libro.sede, strtok(NULL, ","));
        libros[cont] = libro;
        cont++;
    }
    return libros;
}