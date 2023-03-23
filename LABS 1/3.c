#include <stdio.h>

int main()
{
    //função que soma dois valores.
    printf("DIGITE OS VALORES A SEREM SOMADOS: \n ");
    int x = 0; 
    int y = 0;
    scanf("%i %i", &x, &y);
    int z = x+y; //z recebe x + y
    printf("O VALOR DA SOMA E: %i", z);
    return 0;
}
