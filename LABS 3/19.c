#include <stdio.h>

int main()
{
    /*Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
    de um banco e retorne quantas notas de cada valor serão necessárias para atender
    ao saque com a menor quantidade de notas possível.
Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real*/

    // para valor acima de 100, notas de 100, 100<x<50 notas de 50, 50<x<20 notas de 20,
    //20<x<10 notas de 10, 10<x<5 notas de 5, 5<x<2 nota de 2, x impar 1 nota de 1
    float saque;
    int cem=0,cinquenta=0,vinte=0,dez=0,cinco=0,dois=0,um=0;
    scanf("%f", &saque);
        while (saque>=100)
        {
            saque-=100;
            cem++;
        }
        while (saque>=50){
            saque-=50;
            cinquenta++;
        }
        while (saque>=20){
            saque-=20;
            vinte++;
        }
        while (saque>=10){
            saque-=10;
            dez++;
        }
        while (saque>=5){
            saque-=5;
            cinco++;
        }
        while (saque>=2){
            saque-=2;
            dois++;
        }
        while (saque>=1){
            saque-=1;
            um++;
        }
        printf("Notas de 100:%i\nNotas de 50:%i\nNotas de 20:%i\nNotas de 10:%i\nNotas de 5:%i\nNotas de 2:%i\nNotas de 1:%i\n",cem,cinquenta,vinte,dez,cinco,dois,um);
        //até saque <100
    return 0;
}