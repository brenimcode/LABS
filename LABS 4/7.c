#include <stdio.h>
// Faça uma função que receba uma temperatura em graus
// Celsius e retorne-a convertida em graus Fahrenheit. 
int conversao(float c){
    float f = (c * (9.0/5.0)) + 32.0;
    return printf("A temperatura em graus Fahrenheit: %.2f\n",f);
}
int main(){
    float celsius;
    printf("Digite quantos graus celsius: \n");
    scanf("%f",&celsius);
    conversao(celsius);
}