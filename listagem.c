#include <stdio.h>
#include "listagem.h"
#include "structs.h"
void listagem(livro *livros) {

      printf("\ntitulo: %s "
            "\nautor: %s"
            "\nano publicacao: %d"
            "\nISBN: %s",livros->titulo,livros->autor,livros->ano,livros->isbn);
      printf("\n******************************************");
}
