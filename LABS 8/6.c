#include <stdio.h>
//.
int main(){
    int n1,n2;
    int*p1,*p2;
    p1 = &n1;
    p2 = &n2;
    printf("Insira o conteudo da variavel apontada pro p1:");
    scanf("%d",p1);
    printf("Insira o conteudo da variavel apontada pro p2:");
    scanf("%d",p2);
    printf("AS OPERACOES BASICAS:\n");
    printf("%d\n",*p1+*p2);
    printf("%d\n",*p1-*p2);
    printf("%d\n",*p1 * *p2);
    printf("%d\n",*p1 / *p2);

    return 0;
}