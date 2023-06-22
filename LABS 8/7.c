#include <stdio.h>
//.
int main(){
    int n1,n2,n3;
    int *p1,*p2,*p3;
    p1 = &n1;
    p2 = &n2;
    p3 = &n3;
    printf("Ler n1:\n");
    scanf("%d",p1);
    printf("Ler n2:\n");
    scanf("%d",p2);
    printf("Ler n3:\n");
    scanf("%d",p3);
    printf("-- Em ordem crescente --\n");
    if ((*p1>=*p2) && (*p2>=*p3))
    {
        printf("Endereco:[%p] // Conteudo:%d\n",p3,*p3);
        printf("Endereco:[%p] // Conteudo:%d\n",p2,*p2);
        printf("Endereco:[%p] // Conteudo:%d\n",p1,*p1);
    }
    else if(*p1>=*p3 && *p3>=*p2){
        printf("Endereco:[%p] // Conteudo:%d\n",p2,*p2);
        printf("Endereco:[%p] // Conteudo:%d\n",p3,*p3);
        printf("Endereco:[%p] // Conteudo:%d\n",p1,*p1);
    }
    else if(*p2>=*p1 && *p1>=*p3){
        printf("Endereco:[%p] // Conteudo:%d\n",p3,*p3);
        printf("Endereco:[%p] // Conteudo:%d\n",p1,*p1);
        printf("Endereco:[%p] // Conteudo:%d\n",p2,*p2);
    }
    else if(*p2>=*p3 && *p3>=*p1){
        printf("Endereco:[%p] // Conteudo:%d\n",p1,*p1);
        printf("Endereco:[%p] // Conteudo:%d\n",p3,*p3);
        printf("Endereco:[%p] // Conteudo:%d\n",p2,*p2);
    }
    else if(*p3>=*p1 && *p1>=*p2){
        printf("Endereco:[%p] // Conteudo:%d\n",p2,*p2);
        printf("Endereco:[%p] // Conteudo:%d\n",p1,*p1);
        printf("Endereco:[%p] // Conteudo:%d\n",p3,*p3);
    }
    else if(*p3>=*p2 && *p2>=*p1){
        printf("Endereco:[%p] // Conteudo:%d\n",p1,*p1);
        printf("Endereco:[%p] // Conteudo:%d\n",p2,*p2);
        printf("Endereco:[%p] // Conteudo:%d\n",p3,*p3);
    }

    return 0;
}