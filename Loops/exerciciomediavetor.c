#include <stdio.h>
int main() {
    int vetor[10];
    int i;
    int soma = 0;
    float media;
    for(i = 0; i < 10; i++){
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / 10.0;
    printf("os numeros maiores que a media (%.2f) sao:\n", media);
    for(i = 0; i < 10; i++){
        if(vetor[i] > media){
            printf("%d\n", vetor[i]);
        }
    }
    return 0;
}