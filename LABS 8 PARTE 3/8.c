#include <stdio.h>

int negativos(float *vet, int N){
    int i,nega=0;
    for (i = 0; i < N; i++)
    {
        if(*(vet+i) < 0){
            nega++;
        }
    }
    return nega;
}
int main(){
    int n,i,result;
    printf("Tamanho do vetor:\n");
    scanf("%d",&n);
    float vet[n];
    printf("Elementos do vetor de tamanho [%d]\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%f",&vet[i]);
    }
    result = negativos(vet,n);
    printf("Qtd de numeros negativos: [%d]\n",result);
    return 0;
}