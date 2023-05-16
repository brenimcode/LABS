#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}
struct pessoa
{
    char nome[100];
    char endereco[100];
    char telefone[100];
};
int main()
{
    int i;
    struct pessoa a[5];
    for (i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o nome: ");
        gets(a[i].nome);
        setbuf(stdin, NULL);
        printf("Digite o endereco: ");
        gets(a[i].endereco);
        setbuf(stdin, NULL);
        printf("Digite o telefone: ");
        gets(a[i].telefone);
    }
    char *arr[] = {a[0].nome,a[1].nome,a[2].nome,a[3].nome,a[4].nome};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Ordena o array de strings em ordem alfabética
    qsort(arr, n, sizeof(char *), cmpfunc);
    // Imprime o array ordenado
    for (int i = 0; i < n; i++) {
        printf("\nNOME:%s\n: ", arr[i]);
        printf("\nENDERECO:%s\nTELEFONE:%s\n",a[i].endereco,a[i].telefone);
    }
    return 0;
}