#include <stdio.h>
#include <stdlib.h>

void telaSobre (void);
int telaPrincipal (void);
int menuProduto(void);
int telaProduto (void);
void telaCadastroProduto(void);
void telaBuscaProduto(void);
void telaAtualizaProduto(void);
void telaApagaProduto(void);
void telaEntraProduto(void);
void telaSaidaProduto(void);

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


int menuProduto (void) {
    int op;
  do {
    op = telaProduto();
    switch (op) {
      case 1:   telaCadastroProduto();
                break;
      case 2:   telaBuscaProduto();
                break;
      case 3:   telaAtualizaProduto();
                break;          
      case 4:   telaApagaProduto();
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

void telaCadastroProduto(void) {
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

void telaBuscaProduto(void) {
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

void telaAtualizaProduto(void) {
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

void telaApagaProduto(void) {
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
