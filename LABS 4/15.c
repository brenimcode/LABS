#include <stdio.h>
int ver_se_triangulo(float ladoA, float ladoB, float ladoC)
{
    if ((ladoA > 0 && ladoB > 0 && ladoC > 0))
    {
        if ((ladoA + ladoB) > ladoC && (ladoA + ladoC) > ladoB && (ladoC + ladoB) > ladoA)
        {
            printf("\nTriangulo!\n");
            return 1;
        }
        else
        {
            printf("\nNao eh triangulo.\n");
            return 0;
        }
    }
    else{
        return printf("\nNao eh triangulo\n");
    }
}
void tipos_triangulo(float ladoA, float ladoB, float ladoC,float verify)
{
    if ((ladoA > 0 && ladoB > 0 && ladoC > 0) && verify == 1)
    {
        if (ladoA == ladoB && ladoB == ladoC)
        {
             printf("Triangulo equilatero.");
        }
        else if ((ladoA == ladoB && ladoA != ladoC) || (ladoA == ladoC && ladoA != ladoB) || (ladoC == ladoB && ladoC != ladoA))
        {
             printf("Triangulo isosceles.");
        }
        else if (ladoA != ladoB && ladoB != ladoC)
        {
             printf("Triangulo escaleno.");
        }
    }
}
int main()
{
    float ladoA, ladoB, ladoC,verificar;
    printf("Digite o lado A: ");
    scanf("%f", &ladoA);
    printf("Digite o lado B: ");
    scanf("%f", &ladoB);
    printf("Digite o lado C: ");
    scanf("%f", &ladoC);
    verificar = ver_se_triangulo(ladoA,ladoB,ladoC);
    tipos_triangulo(ladoA, ladoB, ladoC,verificar);
    return 0;
}