#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100], l1=0, l2=0;
    printf("Digite a string: ");
    gets(string);
    printf("Digite a letra L1, para ser trocada por L2: ");
    l1 = getchar();
    printf("Digite a letra L2: ");
    setbuf(stdin, NULL); //limpar o buffer
    l2 = getchar();
    int tamanho = strlen(string), i;
    for (i = 0; i < tamanho; i++)
    {
        if (string[i] == l1)
        {
            string[i] = l2;
        }
    }
    printf("String final:\n%s", string);
    return 0;
}