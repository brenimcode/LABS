#include <stdio.h>

int main(){
    /*Faça um programa que apresente um menu de opções para o cálculo das seguintes 
operações entre dois números: adicao,sub,mult,div,saida
*/
int num1,num2,escolha,soma,sub,mult,div;
printf("Digite dois numeros: \n");
scanf("%i%i",&num1,&num2);
do
{
    printf("\nEscolha uma das opcoes: \n");
    scanf("%i",&escolha);
    switch (escolha)
    {
    case 1:
    soma = num1+num2;
    printf("A soma eh: %i\n",soma);
        break;
    case 2:
    sub = num1-num2;
printf("A subtracao eh: %i\n",sub);
        break;
    case 3:
    mult = num1*num2;
printf("A multiplicacao eh: %i\n",mult);
        break;
    case 4:
    if (num2 != 0)
    {
        div = num1/num2;
        printf("A divisao eh: %i\n",div);
    }
        break;
    }

} while (escolha != 5);

    return 0;
}