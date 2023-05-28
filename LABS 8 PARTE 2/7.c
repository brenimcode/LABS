#include <stdio.h>

int main(){
    int array[10],i,maior,menor;
    printf("-- INSIRA ARRAY --");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",array+i);
    }
    maior = *(array);
    menor = *(array);
    for(i = 0; i < 10; i++)
    {
        if (maior <= *(array+i))
        {
            maior = *(array+i);
        }
        if(menor >= *(array+i)){
            menor = *(array+i);
        }
    }
    printf("-- MENOR:%d --\n",menor);
    printf("-- MAIOR:%d --\n",maior);
    return 0;
}