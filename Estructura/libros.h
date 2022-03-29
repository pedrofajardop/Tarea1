//
// Created by Matias Fernandez Mayol on 3/27/22.
//

struct Libros {
    char titulo[50];
    char autor[50];
    int anio;
    int estante_numero;
    char estante_seccion[50];
    int piso;
    char edificio[50];
    char sede[100];
} ;

typedef struct Libros Libro;

Libro* getLibros(FILE *fp);
