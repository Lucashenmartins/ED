#include <stdio.h>
int main() {
    int tabuada;
    printf("Tabuada até a do numero: ");
    scanf("%d", &tabuada);

    for(int x = 1; x <= tabuada; x++){
        for(int i = 1; i <= 10 ; i++) {
            printf("%d x %d = %d\n", x, i, x * i);
        }
    }
    return 0;
}