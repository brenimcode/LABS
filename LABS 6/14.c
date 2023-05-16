#include <stdio.h>
struct carros
{
    char marca[20];
    int ano;
    int preco;
};
int main()
{
    int i,p;
    struct carros a[5];
    for (i = 0; i < 5; i++)
    {
        printf("Digite a marca:\n");
        setbuf(stdin, NULL);
        fgets(a[i].marca, 15, stdin);
        printf("Digite o ano:\n");
        scanf("%d", &a[i].ano);
        printf("Digite o preco:\n");
        scanf("%d", &a[i].preco);
    }
    //mostrar valores menores que p
    do
    {
         printf("Digite p: ");
    scanf("%d",&p);
    for (i = 0; i < 5; i++)
    {
        if (a[i].preco < p)
        {
            printf("Marca: %s",a[i].marca);
            printf("Ano: %i\n",a[i].ano);
            printf("Preco: %i\n\n",a[i].preco);
        }
    }
    } while (p!=0);
    return 0;
}