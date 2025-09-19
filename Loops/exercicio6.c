#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    while (numero < 0) {
        printf("Numero invalido digite um numero inteiro\n");
        scanf("%d", &numero);
    }
    printf("Contagem regressiva:\n");
    while (numero > 0) {
        printf("%d\n", numero);
        numero--;
    }
    printf("Fim!\n");
    return 0;
}