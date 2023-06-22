#include <stdio.h>

int main(){
    int *p;
    p = (int *) malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        printf("Insira number %d': ",i+1);
        scanf("%d",p+i);
    }
    printf("--\n");
    for(int i=0;i<5;i++){
        printf("[%d] ",*(p+i));
    }
    free(p);
    
    return 0;
}