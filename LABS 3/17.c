#include <stdio.h>

int main()
{
    /* Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros
e cresce 3 centímetros por ano. Escreva um programa que calcule e
imprima quantos anos serão necessários para que Zé seja maior que Chico.
    */
    int ze, chico, anos;
    anos = 0;
    ze = 110;
    chico = 150;
    while (chico >= ze)
    {
        ze += 3;
        chico += 2;
        anos++;
    }
    printf("Serao necessarios %i anos", anos);
    return 0;
}