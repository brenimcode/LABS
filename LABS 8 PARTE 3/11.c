#include <stdio.h>
void maior_elemento(int *vet,int n,int *maior){
    int i;
    *maior = *(vet);
    for (i = 0; i < n; i++)
    {
        if (*maior <= *(vet+i) )
        {
            *maior = *(vet+i);
        }
    }
}
int main(){
    int k,i,maior;
    printf("Insira K: ");
    scanf("%d",&k);
    int array[k];
    printf("Insira elementos do array:\n");
    for (i = 0; i < k; i++)
    {
        scanf("%d",array+i);
    }
    maior_elemento(array,k,&maior);
    for (i = 0; i < k; i++)
    {
       printf("[%d] ",*(array+i));
    }
    printf("\nMaior elemento: [%d]",maior);
    
    
    return 0;
}