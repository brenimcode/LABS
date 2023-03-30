#include <stdio.h>

int main()
{
    /* Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo
    */
    printf("\nDigite o preco antigo\n");
    float p_antigo, p_novo;
    scanf("%f", &p_antigo);
    if (p_antigo < 50 && p_antigo>=0)
    {
        p_novo = p_antigo* 1.05;
        printf("O preco novo eh %.2f\n\n", p_novo);
        printf("Barato");
    }
    else if (p_antigo >= 50 && p_antigo <= 100)
    {
        p_novo = p_antigo * 1.1;
        printf("O preco novo eh %.2f\n\n", p_novo);
        if (p_novo <80)
        {
        printf("Barato");
            
        } else if (p_novo>=80 && p_novo<=120)
        {
            printf("Normal");
        }
        
        
    }
    else if (p_antigo < 0)
    {
        printf("Digite um valor maior que zero.\n");
    }
    else
    {
        p_novo = p_antigo * 1.15;
        printf("O preco novo eh %.2f\n\n", p_novo);
        if (p_novo >=80 && p_novo <=120)
        {
            printf("Normal");
        } else if (p_novo>120 && p_novo<=200)
        {
            printf("Caro");
        }
        else {
            printf("Muito caro");
        }
        
        
    }

    return 0;
}
