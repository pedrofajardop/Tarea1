//
// Created by Justo Vargas on 15-03-22.
//
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>
#include "libros.h"

#define MAXCHAR 1000

int registryCount = 0;

Libro* getLibro(FILE *fp) {
    //genero un array dinamico de personas
    Libro *libros = (Libro*) malloc(5000*sizeof(Libro));;

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
        Libro  *libro = (Libro *) malloc(sizeof(Libro));;
        //convierto el id en entero
        int anio = atoi(token);
        //lo paso a la persona
        libro->anio = anio;

        int estante = atoi(token);
        libro->estante = estante;

        int piso = atoi(token);
        libro->piso = piso;

        //obtengo el siguiente campo
        token = strtok(NULL, ",");
        //inicializo el string en la estructura acorde al tamaño que venga del archivo
        libro->titulo = (char*)malloc( strlen(token) * sizeof(char));
        //finalmente lo copio en el campo de persona
        strcpy( libro->titulo, token);

        token = strtok(NULL, ",");
        libro->autor = (char*)malloc( strlen(token) * sizeof(char));
        strcpy( libro->autor, token);

        token = strtok(NULL, ",");
        libro->seccion = (char*)malloc( strlen(token) * sizeof(char));
        strcpy( libro->seccion, token);

        token = strtok(NULL, ",");
        libro->edificio = (char*)malloc( strlen(token) * sizeof(char));
        strcpy( libro->edificio, token);

        libro[cont] = *libro;
        cont++;
    }
    //guardo la cantidad de registros que lei
    registryCount = cont;
    return libros;
}



