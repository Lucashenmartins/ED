#include <stdio.h>
int main() {
    int nota = 0;
    int contador = 0;
    int media = 0;
    while (nota >= 0 && nota <= 10) {
        printf("Digite a nota utilize um numero negativo para parar: ");
        scanf("%d", &nota);
        media += nota;
        contador++;
    }
    media -= nota; //remover a ultima nota negativa
    contador--; //remover o contador da ultima nota negativa
    printf("Media de %d notas: %d\n", contador, media / contador);
    return 0;
}

