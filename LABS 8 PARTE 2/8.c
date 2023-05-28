#include <stdio.h>
int main(){
    int a,*b,**c,***d;
    printf("Insira A: ");
    b = &a;
    scanf("%d",b);
    printf("[%d]\n",*(b)*2);
    c = &b;
    printf("[%d]\n",**(c)*3);
    d = &c;
    printf("[%d]\n",***(d)*4);
    return 0;
}