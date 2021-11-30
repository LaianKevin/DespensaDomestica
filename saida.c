#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "saida.h"


void telaSaidaProduto(void) {
    int barras[13];

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///            Saida de produtos da despensa              /// \n");
    printf("///                                                       /// \n");
    printf("///          Codigo de barras do produto usado: ");
    scanf("%d[0-9]", barras);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}