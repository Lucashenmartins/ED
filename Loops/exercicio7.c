#include <stdio.h>
int main() {
    int numero = 0 ;
    int CodProd[20];
    int opcao;
    do {
        printf("Menu:\n");
        printf("1. cadastrar novo codigo de produto\n");
        printf("2. exibir produtos ordenados\n");
        printf("3. buscar produto por codigo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
             printf("Digite o codigo do produto: ");
                scanf("%d", &CodProd[numero]);
                  numero++;
                printf("Produto cadastrado com sucesso!\n");
                    printf("Codigos de produtos cadastrados:\n");
                    for (int i = 0; i < numero; i++) {
                        printf("%d\n", CodProd[i]);
                    }
              
                break;
            case 2:
            if (numero == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    // Ordenacao simples (Bubble Sort)
                    for (int i = 0; i < numero - 1; i++) {
                        for (int j = 0; j < numero - i - 1; j++) {
                            if (CodProd[j] > CodProd[j + 1]) {
                                int temp = CodProd[j];
                                CodProd[j] = CodProd[j + 1];
                                CodProd[j + 1] = temp;
                            }
                        }
                    }
                    printf("Codigos de produtos cadastrados:\n");
                    for (int i = 0; i < numero; i++) {
                        printf("%d\n", CodProd[i]);
                    }
                }
                break;
                case 3:
                {
                    //busca Binaria
                    printf("Digite o codigo do produto para buscar: ");
                    int busca;
                    scanf("%d", &busca);
                    int inicio;
                    int fim;
                    int meio;
                    int encontrado = 0;
                    inicio = 0;
                    fim = numero - 1;
                    while (inicio <= fim) {
                        meio = (inicio + fim) / 2;
                        if (CodProd[meio] == busca) {
                            encontrado = 1;
                            printf("Produto encontrado: %d\n", CodProd[meio]);
                            break;
                        } else if (CodProd[meio] < busca) {
                            inicio = meio + 1;
                        } else{
                            fim = meio - 1;
                        } 
                       
                    }
                    if(encontrado == 0) { 
                         printf("Produto nao encontrado.\n");
                    }
                }
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } 
 while (opcao != 0);
    printf("Operacao finalizada.\n");
    return 0;
                }
