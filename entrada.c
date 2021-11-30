#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "entrada.h"


void telaEntraProduto(void) {
    int quant[11];
    int datac[11];
    float prec[51];
    int valid[11];
    
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///            Entrada de produtos na despensa            /// \n");
    printf("///                                                       /// \n");
    printf("///           Quantidade de Produto(s): ");
    scanf("%d[0-9]", quant);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///           Data da compra (dd/mm/aaaa): ");
    scanf("%d[0-9/]", datac);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///           Preço unitário: ");
    scanf("%f[0-9/]", prec);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///           Validade: ");
    scanf("%d[0-9/]", valid);
    printf("///////////////////////////////////////////////////////////// \n");
    getchar();
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}