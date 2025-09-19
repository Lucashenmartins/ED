#include <stdio.h>
int main() {
    int numero1;
    int numero2;
    int soma = 0;
    int diferenca = 0;
    int produto = 0;
    float quociente = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    diferenca = numero1 - numero2;
    produto = numero1 * numero2;
    //para divisão, evitar 0
    if (numero2 != 0) {
        quociente = (float)numero1 / numero2;
    }

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    if (numero2 != 0) {
        printf("Quociente: %.2f\n", quociente);
    } else {
        printf("Quociente: indefinido (divisao por zero)\n");
    }

    return 0;
}