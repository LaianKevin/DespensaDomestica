#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "produto.c"
#include "entrada.c"
#include "saida.c"

void telaSobre (void);
int telaPrincipal (void);


int main (void) {
    int op;
  do {
    op = telaPrincipal();
    switch (op) {
      case 1:   menuProduto();
                break;
      case 2:   telaEntraProduto();
                break;
      case 3:   telaSaidaProduto();
                break;          
      case 4:   telaSobre();
                break;
      case 0:   break;
      default: printf("Opção inválida!\n");
    }
  } while (op != 0);
  printf("Fim do programa!\n");
  return 0;
}

void telaSobre (void) {
    system("clear||cls");
    printf("\n");
    printf("//////////////////////////////////////////////////////////// \n");
    printf("///       Projeto de controle de despensa doméstica      /// \n");
    printf("//////////////////////////////////////////////////////////// \n");
    printf("///           Auxilia no controle dos gastos             /// \n");
    printf("///           Auxilia na organização doméstica           /// \n");
    printf("///           Evita gastos desnecessários                /// \n");
    printf("//////////////////////////////////////////////////////////// \n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para retornar ao menu principal...\n");
    getchar();

}

int telaPrincipal (void) {
    int op;
    
    system("clear||cls");
    printf("\n");
    printf("//////////////////////////////////////////////////////////// \n");
    printf("///                   Menu principal                     /// \n");
    printf("///                                                      /// \n");
    printf("///             1. Módulo Casdastro de produto           /// \n");
    printf("///             2. Módulo entrada de produto             /// \n");
    printf("///             3. Módulo saída de produto               /// \n");
    printf("///             4. Sobre o projeto                       /// \n");
    printf("///             0. Sair                                  /// \n");
    printf("//////////////////////////////////////////////////////////// \n");
    printf("///            Escolha a opção desejada: ");
    scanf("%d", &op);
    getchar();
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return op;
}
