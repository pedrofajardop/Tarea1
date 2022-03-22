//
// Created by Matias Fernandez Mayol on 3/22/22.
//

struct Libros {
    char  titulo[50];
    char  autor[50];
    int  anio;
    int  estante_numero;
    int  estante_seccion;
    int  piso;
    int  edificio;
    int  sede;
} ;

typedef struct Libros Libro;

Libros* getLibros(FILE *fp);