#include <stdio.h>
#include <string.h>
struct eletrodomestico
{
    char nome[15];
    int potencia;
    int tempo;
};
int main()
{
    int i, dias;
    float consumo, total = 0;
    struct eletrodomestico eletro[5];
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d' eletrodomestico:\n", i + 1);
        setbuf(stdin, NULL);
        fgets(eletro[i].nome, 15, stdin);
        printf("Digite a potencia do %d' eletrodomestico:\n", i + 1);
        scanf("%d", &eletro[i].potencia);
        printf("Digite o tempo ativo do %d' eletrodomestico:\n", i + 1);
        scanf("%d", &eletro[i].tempo);
    }
    printf("Digite o tempo em dias: ");
    scanf("%d", &dias);
    for (i = 0; i < 5; i++)
    {
        total += eletro[i].potencia * eletro[i].tempo;
    }
    total *= dias;
    printf("O consumo total na casa: %.2f\n", total);
    for (i = 0; i < 5; i++)
    {
        consumo = (eletro[i].potencia * eletro[i].tempo * dias) / total * 100;
        printf("\nO consumo relativo de %s na casa: %.2f%%\n", eletro[i].nome, consumo);
    }
    return 0;
}