#include <stdio.h>
int verificar(int numero){
    if (numero<0)
    {
        return numero = -1;
    }
    else if(numero == 0)
    {
        return numero = 0;
    }
    else
    {
        return numero = 1;
    }

    
}
int main(){
      int number,result;
      printf("Digite um numero: ");
      scanf("%i",&number);
      result = verificar(number);
      printf("%i",result);
    return 0;
}
