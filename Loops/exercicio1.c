#include <stdio.h>
int main() {
    int numero;
    
    printf("digite um numero: ");
    scanf("%d", &numero);
    //mod(%) retorna 0 ou 1. se 1 o numero é impar, se 0 é par
    if (numero % 2 == 0) {
        printf("O numero %d é par\n", numero);
    } else {
        printf("O numero %d é impar\n", numero);
    }
    return 0;
}