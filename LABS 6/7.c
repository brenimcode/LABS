#include <stdio.h>
#include <math.h>

struct cord
{
    float raio;
    float a;
    float x;
    float y;
};
int main()
{
    struct cord a;
    printf("Digite o raio, Claudiney: \n");
    scanf("%f", &a.raio);
    printf("Digite o argumento, Claudiney: \n");
    scanf("%f", &a.a);
    a.x = a.raio*cos(a.a);
    a.y = a.raio*sin(a.a);
    printf("O RESULTADO DO SISTEMA CARTESIANO,CLAUDINEY:\n(%.2f,%.2f)", a.x, a.y);
    return 0;
}