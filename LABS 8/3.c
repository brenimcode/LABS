#include <stdio.h>

int main(){
    //Escreva um programa que contenha duas variáveis inteiras. Compare seus
//endereços e exiba o maior endereço.
int a,b;
int* a1;
int* b1;
a1 = &a;
b1 = &b;
if (a1 > b1 )
{
    printf("%p",a1);
}
else{
    printf("%p",b1);
}

    return 0;
}