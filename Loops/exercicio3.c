#include <stdio.h>
int main() {
    float tempc;
    float tempf;
    for (int x = 0; x < 10; x++) {
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempc);
    tempf = (tempc * 9/5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n", tempf);
}
    return 0;
}   