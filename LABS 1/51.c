#include <stdio.h>
#include <math.h>
int main()
{
    //Dados as cords de x e y no plano cartesiano, calcular a distancia da origem (0,0)
   // printf("Digite o valor de X, e Y nessa ordem: \n");
    int x;
    int y;
    scanf("%i%i",&x,&y);
    float distancia = sqrt((x*x)+(y*y));
    printf("A distancia da origem eh: %.2f",distancia);
    return 0;
}
