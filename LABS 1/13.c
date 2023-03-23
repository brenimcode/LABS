#include <stdio.h>

int main()
{
    //distancia em km para milhas
    printf("Digite a distancia em km: \n");
    float km;
    scanf("%f", &km);
    float milhas = km/1.61;
    printf("Distancia em milhas: %f", milhas);
    return 0;
}
