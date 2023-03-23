#include <stdio.h>

int main()
{
    // converter Celsius para Fahrenheit
    printf("Digite a temperatura em graus Celsius: \n");
    float celsius; //pedir a temp. em celsius
    scanf("%f", &celsius); //ler esse dado 
    float fahr = celsius*(9.0/5.0)+32.0 ; //converter a partir da formula
    printf("a temperatura em fahrenheit : %f", fahr); //imprimir o result.
    
    return 0;
}
