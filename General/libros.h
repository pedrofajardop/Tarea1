//
// Created by Matias Fernandez Mayol on 3/22/22.
//

void find_book();

struct Libros {
    char  titulo[100];
    char  autor[100];
    char  edificio[100];
    char  sede[100];
    char  estante_seccion[100];
    int  anio;
    int  estante_numero;
    int  piso;
} ;

typedef struct Libros Libro;

Libros* getLibros(FILE *fp);
