#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int verificar(int x,int m[],int t){
    int i;
    for (i = 0; i < t; i++)
    {
        if(m[i] == x){
            return 1;
        }
    }
    return 0;
}
int main(){
    int *vet,dimensao,ver=0,x,i;
    printf("Insira dimensao: ");
    scanf("%d",&dimensao);
    vet = (int*) calloc(dimensao,sizeof(int));
    printf("Insira numero x: ");
    scanf("%d",&x);
    printf("-- Insira vetor --\n");
    for (i = 0; i < dimensao; i++)
    {
        printf("Vetor[%d] ",i);
        scanf("%d",vet+i);
    }
    ver = verificar(x,vet,dimensao);
    printf("-- [%d] --\n",ver);
    return 0;   
}