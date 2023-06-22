#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet,i,cont=0;
    vet = (int *) calloc(1500,sizeof(int));
    for (i = 0; i < 1500; i++)
    {
        if(*(vet+i)==0)
        cont++;
    }
    printf("Zeros do vetor: [%d]\n",cont);
    for (i = 0; i < 1500; i++)
    {
        *(vet+i) = i;
    }
    printf("10 Primeiros:\n");
    for (i = 0; i < 1500; i++)
    {
        if(i == 1489){
            printf("10 Ultimos:\n");
        }
        if(i<10){
        printf("[%d]\n",*(vet+i));
        }
        else if(i>1489)
        {
            printf("[%d]\n",*(vet+i));
        }
    }
    free(vet);
    
    return 0;
}