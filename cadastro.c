#include <stdio.h>
#include "structs.h"
#include "cadastro.h"
#include <string.h>
int cadastro(int i,livro *livro) {

    printf("\ntitulo do livro:");
         scanf("%[^\n]",livro->titulo);
        getchar();

    printf("\nautor:");
        scanf("%[^\n]",livro->autor);
         getchar();

    printf("\nano de publicacao:");
         scanf("%d",&livro->ano);
         getchar();

    printf("\nISBN:");
        scanf("%[^\n]",livro->isbn);
        getchar();




return 0;

}


