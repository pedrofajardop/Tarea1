//
// Created by Justo Vargas on 15-03-22.
//
struct Libros {
    char *titulo;
    char *autor;
    int anio;
    int estante;
    char  *seccion;
    int piso;
    char *edificio;
} ;

typedef struct Libros Libro;

extern int registryCount;

Libro* getLibro(FILE *fp);

