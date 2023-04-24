#include <stdio.h>
int primos(int num){
    int i,j,ver = 0,primo=0;
    if (num >= 3)
    {
        primo = 1;
    }
    for (i = 3; i <= num; i+=2)
    {
        for ( j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                ver++;
            }
        }
        if (ver == 2)
        {
            primo++;
        }
        ver = 0;
    }

    return primo;
    
}
int main(){
    int n,quant;
    scanf("%i",&n);
    quant = primos(n);
    printf("qtd Primos: %i",quant);
    return 0;
}