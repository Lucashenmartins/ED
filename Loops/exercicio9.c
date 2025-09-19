#include <stdio.h>
int main() {
    int inicio;
    int fim;
    int k;
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);
    printf("Digite o numero para descobrir os multiplos: ");
    scanf("%d", &k);
    printf("Multiplos de %d entre %d e %d:\n", k, inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (i % k == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}