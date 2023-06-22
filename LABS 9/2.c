#include <stdio.h>

int main(){
    int n;
    int *p;
    printf("Insira o tamanho do vetor: ");
    scanf("%d",&n);
    p = (int *) malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i = 0;i<n;i++){
        printf("%d",*(p+i));
    }

    return 0;
}