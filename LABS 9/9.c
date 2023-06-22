#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p,i,j;
    p = malloc(99999*sizeof(int));
    for (i = 0; i < 99999; i++)
    {
        printf("Insira: ");
        scanf("%d",&p[i]);
        if(p[i] <0){
            break;
        }
    }
    p = realloc(p,i*sizeof(int));
    for (j = 0; j < i; j++)
    {
        printf("%d ",*(p+j));
    }
    free(p);
    return 0;
}