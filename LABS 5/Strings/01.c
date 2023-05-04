#include <stdio.h>
#include <string.h>
//Ler e imprimir string
int main(){
 char str[100];
 printf("Digite uma string: ");
 gets(str);
 printf("%s",str);
 return 0;
}