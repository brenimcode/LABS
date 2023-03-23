#include <stdio.h>

int main() {
    //Ler um temp em Fahr e converte-la para celsius.
    printf("Digite a temperatura em Fahrenheit: \n");
    float fahr;
    scanf("%f", &fahr);
    float celsius = 5.0*(fahr-32.0)/9.0;
    
printf("A temperatura em celsius: %f", celsius);
return 0;
}