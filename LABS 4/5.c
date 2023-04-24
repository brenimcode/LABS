#include <stdio.h>
int teste(int raio)
{
    float volume;
    double pi = 3.14159;
    if (raio < 0)
    {
        return printf("Erro");
    }
    else
    {
        volume = 4 / 3 * pi * raio * raio * raio;
        return printf("O Volume da esfera: %.4f\n", volume);
    }
}
int main()
{
    int r;
    scanf("%i", &r);
    teste(r);
    return 0;
}