#include <stdio.h>
int main() {
    int numero = 0;
    int soma = 0;
    printf("Digite a quantidade de numeros impares a serem somados: ");
    scanf("%d", &numero);
  for (int i = 0; i < numero; i++) { // começa no 0 para gerar o numero 1
        soma += (i * 2) + 1; // logica é começar 0*2+1=1, 1*2+1=3, 2*2+1=5...
    }
    printf("A soma dos %d primeiros numeros impares é: %d\n", numero, soma);
    return 0;  

}