#include <stdio.h>
int main() {
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    // || é o operador "ou"
    while (idade < 0 || idade > 120) {
        printf("Idade invalida. Digite novamente: ");
        scanf("%d", &idade);
    }
    printf("Idade valida: %d\n", idade);
    return 0;
}