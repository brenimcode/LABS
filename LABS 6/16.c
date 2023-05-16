#include <stdio.h>
struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    char compromisso[60];
    struct data data;
};

int main(){
    int i,M,A;
    struct compromisso vet[5];
    for (i = 0; i < 5; i++)
    {
        printf("\nInsira compromisso:\n");
        setbuf(stdin,NULL);
        fgets(vet[i].compromisso,60,stdin);
        //ler a data:
        printf("Digite o dia: ");
        scanf("%d",&vet[i].data.dia);
        printf("Digite o mes: ");
        scanf("%d",&vet[i].data.mes);
        printf("Digite o ano: ");
        scanf("%d",&vet[i].data.ano);
    }
    do
    {
    printf("Digite mes M: ");
    scanf("%d",&M);
    printf("Digite mes A: ");
    scanf("%d",&A);
    for (i = 0;i<5; i++)
    {
        if (vet[i].data.mes == M && vet[i].data.ano == A)
        {
           printf("\nCompromisso de mes '%d' e ano '%d' : %s",M,A,vet[i].compromisso);
        }
    }
    } while (M!=0);
    return 0;
}