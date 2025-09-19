#include <stdio.h>
int main() {
    int preco;
    int total = 0;
    int quantidade = 0;
    while (preco != 0) { // enquanto o preço for diferente de 0
        printf("Digite o preco do produto (0 para sair): ");
        scanf("%d", &preco);
        total += preco;
        if (preco != 0) { // não contar o 0 na quantidade
            quantidade++;
        }
    }
    printf("total gasto em %d produtos: %d\n", quantidade, total);
    return 0;
}