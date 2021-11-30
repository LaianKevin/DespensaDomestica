#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "produto.h"


int menuProduto (void) {
    int op;
  do {
    op = telaProduto();
    switch (op) {
      case 1:   CadastroProduto();
                break;
      case 2:   BuscaProduto();
                break;
      case 3:   AtualizaProduto();
                break;          
      case 4:   ApagaProduto();
                break;
      case 0:   break;
      default: printf("Opção inválida!\n");
    }
  } while (op != 0);
  return 0;
}

int telaProduto(void) {
    int op;
    
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///              1. Cadastrar produto                     /// \n");
    printf("///              2. Encontrar produto                     /// \n");
    printf("///              3. Atualizar o cadastro do produto       /// \n");
    printf("///              4. Excluir produto do cadastro           /// \n");
    printf("///              0. Voltar                                /// \n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///           Escolha a opção desejada: ");
    scanf("%d", &op);
    getchar();
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return op;
}

void CadastroProduto(void) {
    char nome[51];
    char marca[51];
    char comp[4];
    int barras[13];
    
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///          Nome do produto: ");
    scanf("%s[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///          Marca: ");
    scanf("%s[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", marca);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///          Unidade do produto: ");
    scanf("%s[A-Z]", comp);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///          Código de barras: ");
    scanf("%d[0-9]", barras);
    getchar();
    printf("///////////////////////////////////////////////////////////// \n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void BuscaProduto(void) {
    int barras[13];
    
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///                   Buscar Produto                      /// \n");
    printf("///                                                       /// \n");
    printf("///      Código de barras do produto: ");
    scanf("%d[0-9]", barras);
    getchar();
    printf("///                                                       /// \n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void AtualizaProduto(void) {
    int barras[13];

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///              Atualizar dados do Produto               /// \n");
    printf("///                                                       /// \n");
    printf("///      Código de barras do produto: ");
    scanf("%d[0-9]", barras);
    getchar();
    printf("///                                                       /// \n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void ApagaProduto(void) {
    int barras[13];

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("///                Apagar dados do Produto                /// \n");
    printf("///                                                       /// \n");
    printf("///      Código de barras do produto: ");
    scanf("%d[0-9]", barras);
    getchar();
    printf("///                                                       /// \n");
    printf("///////////////////////////////////////////////////////////// \n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}