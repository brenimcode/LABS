#include <stdio.h>
float notas(char letra1, float nota1, float nota2, float nota3)
{
    float ari, pon;
    if (letra1 == 'A' || letra1 == 'a')
    {
        // media aritm
        ari = (nota1 + nota2 + nota3) / 3;
        return ari;
    }
    else if (letra1 == 'P' || letra1 == 'p')
    {
        // media ponderada 5,3,27
        pon = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        return pon;
    }
    else
    {
        return 0;
    }
}
int main()
{
    float n1, n2, n3, media;
    char letra;
    printf("Letra: ");
    scanf("%c", &letra);
    printf("N1: ");
    scanf("%f", &n1);
    printf("N2: ");
    scanf("%f", &n2);
    printf("N3: ");
    scanf("%f", &n3);
    media = notas(letra, n1, n2, n3);
    if (media != 0)
    {
        printf("A media eh: %.2f", media);
    }
    return 0;
}