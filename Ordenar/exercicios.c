#include <stdio.h>

int contar(int n1, int n2);
int main(){ 
    int n1, n2;
    printf("Digite o inicio da contagem: ");
    scanf("%d", &n1);
    printf("Digite o fim da contagem: ");
    scanf("%d", &n2);
    contar(n1, n2);
    return 0;
}
int contar(int n1, int n2){
    int i;
    printf("Contagem: ");
    for(i = n1; i <= n2; i++){
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}