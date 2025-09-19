#include <stdio.h>

int main()
    {
    int n1;
    int n2;
    int n3;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1); // ler primeiro numero
    printf("Informe o segundo numero: ");
    scanf("%d", &n2); // ler segundo numero
    printf("Informe o terceiro numero: ");
    scanf("%d", &n3); // ler terceiro numero
    if (n1 <= n2 && n1 <= n3){
        if (n2 <= n3){
            printf("%d, %d, %d\n", n1, n2, n3);
        }else{
            printf("%d, %d, %d\n", n1, n3, n2);
        }   
    }else if (n2 <= n1 && n2 <= n3){
        if (n1 <= n3){
            printf("%d, %d, %d\n", n2, n1, n3);
        }else{
            printf("%d, %d, %d\n", n2, n3, n1);
        }
    }else{
        if (n1 <= n2){
            printf("%d, %d, %d\n", n3, n1, n2);
        }else{
            printf("%d, %d, %d\n", n3, n2, n1);
        }
    }
    return 0;
    }