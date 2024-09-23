#include <stdio.h>
#include "busca.h"
#include "structs.h"
#include <string.h>

int busca(livro *livros,char *titulo) {

    int resultado = strcmp(titulo,livros->titulo);

    if(resultado == 0) {
        printf("\n titulo encontrado");
        printf("\ntitulo: %s"
               "\nautor: %s"
               "\nano de publicacao: %d"
               "\nISBN: %s",livros->titulo,livros->autor,livros->ano,livros->isbn);
        }
    else {printf("\ntitulo nao cadastrado");}


}

