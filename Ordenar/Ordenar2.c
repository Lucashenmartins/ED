#include <stdio.h>

int main(){
    int i, j, aux;
    int n = 15;
    int vetor[10];
    printf("Digite as 10 notas de 0 a 10:\n");
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

    if(vetor[14] == 10){
        printf("Otimo! Houve Clientes totalmente satsfeitos!\n");
    }
    else{
        printf("Infelizmente nao houve clientes totalmente satisfeitos.\n");
    }
    return 0;
}
