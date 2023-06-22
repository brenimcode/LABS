/*Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação*/
#include <stdio.h>
/.
int main(){
    int a;
    float b;
    char c;
    int* a1;
    float* b1;
    char* c1;
    a1 = &a;
    b1 = &b;
    c1 = &c;
    printf("Digite o inteiro a:\n");
    scanf("%d",&a);
    printf("Digite o real b:\n");
    scanf("%f",&b);
    printf("Digite o char c:\n");
    setbuf(stdin,NULL);
    c = getchar();
    printf("inteiro: %i\n",a);
    printf("endereco apontado por a1:%p\n",a1);
    printf("endereco de a:%p\n",&a);
    printf("conteudo apontado por a1:%d\n",*a1);

    printf("real: %.2f\n",b);
    printf("endereco apontado por b1:%p\n",b1);
    printf("endereco de b:%p\n",&b);
    printf("conteudo apontado por b1:%.2f\n",*b1);

    printf("caractere: %c\n",c);
    printf("endereco apontado por c1:%p\n",c1);
    printf("endereco de c:%p\n",&c);
    printf("conteudo apontado por c1:%c\n",*c1);

    return 0;
}