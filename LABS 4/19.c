#include <stdio.h>
int fatorial(int num){
    int result=1;
    int cont = num;
    int i = 0;
    if (num > 1)
    {
       while (cont>i)
       {
        result = result*(num);
        num--;
        i++;
       }
       
    }
    else if(num<0){
        return -1;
    }

    return result;
}

int main(){
    int n,resultado;
    printf("Digite um inteiro: ");
    scanf("%i",&n);
    resultado = fatorial(n);
    if (resultado == -1)
    {
        printf("Erro.");
    }
    else {
        printf("Resultado: %i",resultado);
    }
    return 0;
}