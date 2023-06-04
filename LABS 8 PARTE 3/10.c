#include <stdio.h>
int alterar(int *vet, int n, int *vet1, int n1, int *vet3)
{
    if (n != n1)
    {
        return 0;
    }
    int i;
    for (i = 0; i < n; i++)
    {
        *(vet3 + i) = (*(vet + i) + *(vet1 + i));
    }
    return 1;
}
int main()
{
    int array1[10], array2[10], tamanho1, tamanho2, i;
    int array3[10];
    printf("Informe o tamanho do array1 e array2, respectivamente:\n");
    scanf("%d%d", &tamanho1, &tamanho2);
    printf("Preencha array1:\n");
    for (i = 0; i < tamanho1; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Preencha array2:\n");
    for (i = 0; i < tamanho2; i++)
    {
        scanf("%d", &array2[i]);
    }
    alterar(array1, tamanho1, array2, tamanho2, array3);
    for (i = 0; i < tamanho1; i++)
    {
        printf("Vetor soma: [%d]\n", *(array3+i));
    }
    return 0;
}