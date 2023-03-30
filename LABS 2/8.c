#include <stdio.h>

int main()
{
    /* Faça um programa que leia 2 notas de um aluno, verifique
     se as notas são válidas e exiba na
    tela a média destas notas. Uma nota válida deve ser, obrigatoriamente,
    um valor entre 0.0 e
    10.0, onde caso a nota não possua um valor válido, este fato
   deve ser informado ao usuário e o
   programa termina. */
    printf("Digite duas notas entre 0 e 10:\n");
    float a, b;
    scanf("%f%f", &a, &b);
    if ((a>=0 && a<=10) && (b>=0 && b<=10))
    {
        float media = (a+b)/2;
        printf("A media das notas eh %.2f",media);
    } else {
        printf("\nDigite um numero valido, ou seja, de 0 a 10.");
    }
    

    return 0;
}
