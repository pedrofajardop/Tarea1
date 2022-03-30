#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include "libros.h"
#define MAXCHAR 1000

#define READ_ONLY "r"


FILE * openingFile(char *filename){
    FILE *fp;
    fp = fopen(filename,READ_ONLY);
    return fp;
}



int main(int argc, char *argv[] ){

    FILE *fp = openingFile(argv[1]);


    return 0;

}

//
