#include <stdio.h>

int main()
{
    /* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. */
    printf("Digite a idade e tempo de servico em seguida: \n");
    int idade, tempo;
    scanf("%i%i", &idade, &tempo);
    if ((idade >= 65 || tempo >= 30) || (idade >= 60 && tempo >= 25))
    {
        printf("Pode aposentar.");
    }
    else
    {
        printf("Não pode aposentar.");
    }
    return 0;
}
