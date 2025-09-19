#include <stdio.h>

int main(){
    int i, j, aux;
    int n = 10;
    int vetor[10];
    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado em ordem crescente:\n");
    for(i = 0; i < n; i++){
        printf("%d, ", vetor[i]);
    }
    printf("%d %d", vetor[0], vetor[9]);
    printf("\n");
    printf("Vetor ordenado em ordem decrescente:\n");
    for(i = n - 1; i >= 0; i--){
        printf("%d, ", vetor[i]);   
    }
    printf("%d %d", vetor[9], vetor[0]);
    printf("\n");

    return 0;
}
