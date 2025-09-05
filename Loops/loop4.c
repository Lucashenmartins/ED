#include <stdio.h>
int main() {
    int tabuada;
    int i = 10;
    printf("Tabuada até a do numero: ");
    scanf("%d", &tabuada);
    int numero = tabuada + 1;
    while(tabuada <= numero && tabuada > 0){
        while(i > 0){
            printf("%d x %d = %d\n", tabuada, i, tabuada * i);
            i--;
        }
        numero--;
        tabuada--;
        i = 10;
    }
    return 0;
}