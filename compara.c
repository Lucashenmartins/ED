#include <stdio.h>

int main()
{
   
    int n1;
    int n2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1); // ler primeiro numero
    printf("Informe o segundo numero: ");
    scanf("%d", &n2); // ler segundo numero
    if (n1 >= n2){
        printf("%d + %d = %d", n1, n2, n2+n1) ; //soma dos dois numeros
    }else{
        printf("%d - %d = %d", n2, n1, n2-n1);
    }
    return 0;
}