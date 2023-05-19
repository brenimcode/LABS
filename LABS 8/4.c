#include <stdio.h>
int main(){
    int a,b;
    printf("Insira a:\n");
    scanf("%d",&a);
    printf("Insira b:\n");
    scanf("%d",&b);
    //comparar o conteudo apontado pelos ponteiros
    int* p1;
    int* p2;
    p1 = &a;
    p2 = &b;
    printf("O conteudo do maior endereco eh: ");
    if (p1 > p2)
    {
        printf("[%d]\n",*p1);
    }
    else{
        printf("[%d]\n",*p2);
    }
    
    return 0;
}