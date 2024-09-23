#include <stdio.h>
#include "cadastro.h"
#include <stdlib.h>
#include "busca.h"
#include "structs.h"
#include "listagem.h"

//variaveis globais


#define quant 100
int reiniciar;

int main() {
    int option;
    livro livro[quant]={'null','null',0,'null'};


    do {
        option=0;
        reiniciar = 0;


        printf("digite as opcoes a seguir:"
            "\n(1) cadastro de livros."
            "\n(2) busca livros por titulo."
            "\n(3) lista todos os livros."
            "\ndigite: ");
            scanf("%d",&option);
            getchar();

        if(option==1) {

            for(int i=0;i<quant;i++) {
                printf("\n--------cadastro--------\n");
                cadastro(i,&livro[i]);

            }
            printf("\n-----fim do cadastro----\n");

        }

        else if(option==2) {
                  char titulo[100];
                  printf("\ndigite o titulo do livro: ");
                  scanf("%[^\n]",&titulo);
                  getchar();

                for(int i=0;i<quant;i++) {
                    printf("\n--------busca-------- ");
                    busca(&livro[i],&titulo);

                }
                     printf("\n------fim da busca----");

        }
        else if(option==3) {


                  printf("\n******listagem******");
                  for(int i=0;i<quant;i++) {
                    listagem(&livro[i]);
                }

        }
                printf("\n****fim listagem****");

        printf("\n digite uma opcao:"
            "\n1 - sair."
            "\n2 - volta ao menu principal."
            "\ndigite uma opcao: ");
            scanf("%d",&reiniciar);
            getchar();

    }while (reiniciar == 2);
    return 0;
}
