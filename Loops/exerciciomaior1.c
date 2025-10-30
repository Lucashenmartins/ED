#include <stdio.h>


int main() {
int vetor[7];
int i;
int maior = 0;
for(i = 0; i < 7; i++){
    printf("Digite o %dº numero: ", i + 1);
    scanf("%d", &vetor[i]);
}
//sorting the array in descending order
int bsort, j, aux;
for(bsort = 0; bsort < 7 - 1; bsort++){
    for(j = 0; j < 7 - bsort - 1; j++){
        if(vetor[j] < vetor[j + 1]){
            aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
        }
    }
}
    //encontrando o terceiro maior numero
    int contador = 1;
    maior = vetor[0];
    for(i = 1; i < 7; i++){
        if(vetor[i] < maior){
            maior = vetor[i];
            contador++;
        }
        if(contador == 3){
            printf("O terceiro maior numero e: %d\n", maior);   
            break;
        }
    }

    

}