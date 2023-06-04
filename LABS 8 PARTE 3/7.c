#include <stdio.h>
void retorno(int *p1,int tamanho,int *maior,int *ocorrencia){
    int i;
    *maior = *p1;
    for (i = 1; i < tamanho ; i++)
    {
        if ((*p1+i) > *maior)
        {
            *maior = *(p1+i);
        }
    }

    for (i = 0; i < tamanho; i++)
    {
        if(*(p1+i) == *maior){
            *(ocorrencia) = *(ocorrencia) + 1;
        }
    }
}

int main(){
    int n,i,maior,vezes=0;
    printf("Tamanho do Vetor >>\n");
    scanf("%d",&n);
    int vet[n];
    printf("Elementos do vetor de tamanho %d\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&vet[i]);
    }
    retorno(vet,n,&maior,&vezes);
    printf("Maior: %d\nVezes: %d\n",maior,vezes);

    return 0;
}