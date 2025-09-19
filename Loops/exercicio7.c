#include <stdio.h>
int main() {
    int numero = 2;
    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Dobrar numero\n");
        printf("2. Metade do numero\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                numero *= 2;
                printf("Numero dobrado: %d\n", numero);
                break;
            case 2:
                numero /= 2;
                printf("Numero metade: %d\n", numero);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
    printf("Operacao finalizada.\n");
    return 0;
}