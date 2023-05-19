#include <stdio.h>

int main(){
    int vet[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        scanf("%d",&vet[i]);
    }

    for (i = 0; i < 6; i++)
    {
       
        printf("ENDERECO:[%p] // ",vet+i);
        printf("%d\n",*(vet+i));
    }
    
    return 0;
}