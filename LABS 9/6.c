#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bytes, *vet, i, opcao, valor;
    do
    {
        printf("Tamanho da memoria: ");
        scanf("%d", &bytes);
        // a memoria deve ser multiplo de 4: (0,4,8,16,20,24,28...)
        if(bytes%4!=0)
        printf("A memoria deve ser multipla de 4.\n");
    } while (bytes%4!=0);

    vet = (int *)calloc(bytes, sizeof(int));
    do
    {
        printf("-- Escolha a opcao --\n1: Inserir valor em uma posicao.\n2: Consultar o valor contido em determinada posicao.\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Posicao: ");
            scanf("%d", &i);
            printf("Valor: ");
            scanf("%d", &valor);
            *(vet + i) = valor;
            break;
        case 2:
            printf("Posicao: ");
            scanf("%d", &i);
            printf("Valor contido na posicao [%d]: { %d }", i, *(vet + i));
            break;
        default:
            printf("Escolha uma opcao valida.\n");
            break;
        }
    } while (opcao != 1 && opcao != 2);
    free(vet);
    return 0;
}